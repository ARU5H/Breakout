#pragma once

#include <iostream>
#include <fmod/fmod.hpp>

class AudioPlayer {
private:
    FMOD::System* system;
    FMOD::Sound* sound;
    FMOD::Channel* channel;

public:
    AudioPlayer() : system(nullptr), sound(nullptr), channel(nullptr) {
        FMOD::System_Create(&system);
        system->init(512, FMOD_INIT_NORMAL, nullptr);
    }

    ~AudioPlayer() {
        if (sound) sound->release();
        if (system) system->close();
        if (system) system->release();
    }

    bool loadSound(const std::string& filename) {
        if (system->createSound(filename.c_str(), FMOD_DEFAULT, nullptr, &sound) != FMOD_OK) {
            std::cerr << "Failed to load sound: " << filename << std::endl;
            return false;
        }
        return true;
    }

    void play() {
        if (sound)
            system->playSound(sound, nullptr, false, &channel);
    }

    void pause() {
        if (channel) {
            bool isPaused;
            channel->getPaused(&isPaused);
            channel->setPaused(!isPaused);
        }
    }

    void stop() {
        if (channel)
            channel->stop();
    }

    void update() {
        if (system)
            system->update();
    }
};

