# Breakout Game

A modern recreation of the classic Breakout arcade game built from scratch using C++ and OpenGL. This project showcases advanced graphics programming, custom game engine architecture, and real-time rendering techniques.

## 🎮 Features

- **Custom Game Engine**: Built from scratch with modular component-based architecture
- **Advanced Physics**: Precise AABB-Circle collision detection for realistic ball movement
- **Visual Effects**: Real-time particle system with 500+ particles and dynamic trail effects
- **Shader Programming**: Custom GLSL shaders for post-processing effects (bloom, motion blur, color grading)
- **Audio System**: Spatial audio integration with environmental sound effects
- **Progressive Difficulty**: Dynamic level system with increasing challenge
- **Power-up System**: 6 different power-up types with temporary effects
- **Performance Optimized**: 60+ FPS with efficient memory management and object pooling

## 🛠️ Tech Stack

- **Language**: C++ (93.5%), C (6.5%)
- **Graphics API**: OpenGL 4.0+
- **Window Management**: GLFW
- **Shader Language**: GLSL
- **Audio**: OpenAL/FMOD
- **Build System**: CMake
- **Math Library**: GLM (OpenGL Mathematics)

## 📊 Project Statistics

- **Core Classes**: 12 modular game engine components
- **Shader Programs**: 3 custom GLSL shaders
- **Particle System**: 500+ real-time particles
- **Power-up Types**: 6 different temporary effects
- **Performance**: 60+ FPS with optimized rendering pipeline
- **Memory Management**: Efficient object pooling system

## 🏗️ Architecture

├── Engine/
│ ├── Core/ # Core engine systems
│ ├── Graphics/ # Rendering and shaders
│ ├── Physics/ # Collision detection
│ └── Audio/ # Sound management
├── Game/
│ ├── Objects/ # Game entities (Ball, Paddle, Brick)
│ ├── Systems/ # Game logic systems
│ └── Effects/ # Particle and visual effects
├── Resources/
│ ├── Shaders/ # GLSL shader files
│ ├── Textures/ # Game textures
│ └── Audio/ # Sound effects
└── External/ # Third-party libraries


## 🚀 Installation

### Prerequisites

- **Compiler**: GCC 9.0+ or MSVC 2019+
- **CMake**: Version 3.16 or higher
- **OpenGL**: 4.0 or higher support
- **Graphics Drivers**: Updated GPU drivers

### Dependencies

The following libraries are required:
- GLFW (Window management)
- GLAD (OpenGL loader)
- GLM (Mathematics)
- OpenAL (Audio)
- stb_image (Image loading)

### Build Instructions

1. **Clone the repository**
git clone https://github.com/ARU5H/Breakout.git
cd Breakout


2. **Create build directory**
mkdir build
cd build


4. **Compile the project**
Visual Studio


5. **Run the game**
./Breakout


## 🎯 Gameplay

### Controls
- **A/D Keys**: Move paddle left/right
- **Space**: Launch ball
- **P**: Pause game
- **R**: Restart level
- **ESC**: Exit game

### Power-ups
- **Speed Boost**: Increases ball speed temporarily
- **Paddle Extend**: Extends paddle width
- **Multi-ball**: Spawns additional balls
- **Sticky Paddle**: Ball sticks to paddle on contact
- **Pass Through**: Ball passes through bricks
- **Confuse**: Inverts player controls

### Scoring System
- **Brick Destruction**: 10-50 points based on brick type
- **Power-up Collection**: 100 points
- **Level Completion**: 1000 bonus points
- **Combo Multiplier**: Sequential hits increase multiplier

## 🔧 Technical Features

### Graphics Pipeline
- **Vertex Buffer Objects**: Efficient geometry rendering
- **Shader Management**: Dynamic shader compilation and linking
- **Texture Atlas**: Optimized texture memory usage
- **Instanced Rendering**: Batch rendering for particles

### Physics System
- **AABB-Circle Collision**: Accurate collision detection algorithm
- **Velocity Integration**: Smooth ball movement and bouncing
- **Collision Response**: Realistic physics interactions
- **Spatial Partitioning**: Optimized collision checking

### Audio System
- **3D Positional Audio**: Spatial sound effects
- **Audio Streaming**: Efficient audio memory management
- **Dynamic Volume**: Distance-based audio attenuation
- **Multi-channel Support**: Simultaneous audio playback

## 🛠️ Development

### Project Structure
class GameEngine {
Renderer renderer;
AudioManager audio;
InputManager input;
PhysicsWorld physics;

public:
void Initialize();
void Update(float deltaTime);
void Render();
void Shutdown();
};


### Adding New Features
1. Create new component classes
2. Register with engine systems
3. Implement update/render loops
4. Add to CMake configuration

### Performance Profiling
- Use built-in frame time counter
- Profile with external tools (RenderDoc, Nsight)
- Monitor memory usage and allocations
- Optimize hot code paths

## 📈 Performance Optimization

- **Object Pooling**: Reuse game objects to reduce allocations
- **Frustum Culling**: Skip rendering off-screen objects
- **Batch Rendering**: Minimize draw calls
- **Memory Alignment**: Optimize data layout for cache efficiency
- **Multithreading**: Separate update and render threads

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/NewFeature`)
3. Commit your changes (`git commit -m 'Add NewFeature'`)
4. Push to the branch (`git push origin feature/NewFeature`)
5. Open a Pull Request

### Development Guidelines
- Follow C++ Core Guidelines
- Use consistent code formatting
- Add unit tests for new features
- Document public APIs
- Profile performance impact

## 📚 Resources

- [OpenGL Documentation](https://www.opengl.org/documentation/)
- [GLFW User Guide](https://www.glfw.org/docs/latest/)
- [LearnOpenGL Tutorials](https://learnopengl.com/)
- [Game Programming Patterns](https://gameprogrammingpatterns.com/)

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

**Arush Singh Kiron**
- GitHub: [@ARU5H](https://github.com/ARU5H)
- LinkedIn: [Arush Singh Kiron](https://www.linkedin.com/in/arush-singh-kiron-a27387339/)
- Email: arush.singhkiron@gmail.com

## 🎯 Future Enhancements

- [ ] Multiplayer support
- [ ] Level editor
- [ ] Advanced lighting effects
- [ ] VR support
- [ ] Mobile port
- [ ] Steam Workshop integration

## 🙏 Acknowledgments

- OpenGL community for excellent documentation
- GLFW team for cross-platform window management
- Khronos Group for OpenGL specification
- Game development community for inspiration
- IIT Patna for the learning environment

---

**Note**: This project demonstrates advanced C++ programming, graphics programming, and game engine development skills. It serves as a portfolio piece showcasing real-time rendering, physics simulation, and software architecture capabilities.
