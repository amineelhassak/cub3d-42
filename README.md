# 🎮 Cub3D - 3D Raycasting Game Engine

[![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-brightgreen.svg)]()
[![Build](https://img.shields.io/badge/Build-Passing-success.svg)]()
[![Version](https://img.shields.io/badge/Version-1.0.0-blue.svg)]()

<div align="center">

# 🎮 Cub3D Game Engine

> A 3D raycasting game engine inspired by Wolfenstein 3D, built with MLX42 graphics library.

**Experience the magic of 3D graphics with raycasting technology!**

[![GitHub stars](https://img.shields.io/github/stars/yourusername/cub3d-42?style=social)](https://github.com/yourusername/cub3d-42/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/yourusername/cub3d-42?style=social)](https://github.com/yourusername/cub3d-42/network)
[![GitHub issues](https://img.shields.io/github/issues/yourusername/cub3d-42)](https://github.com/yourusername/cub3d-42/issues)

</div>

---

## 📚 Table of Contents

- [🎯 Overview](#-overview)
- [✨ Features](#-features)
- [🛠️ Installation](#️-installation)
- [🎮 Usage](#-usage)
- [🎯 Controls](#-controls)
- [🗺️ Map Format](#️-map-format)
- [📁 Project Structure](#-project-structure)
- [🛠️ Technologies Used](#️-technologies-used)
- [🎨 Screenshots](#-screenshots)
- [🤝 Contributing](#-contributing)
- [📄 License](#-license)

## 🎯 Overview

Cub3D is a **3D game engine** that uses raycasting to create a pseudo-3D environment from a 2D map. The project consists of two versions:

- **🎯 Mandatory**: Basic 3D raycasting engine with texture mapping
- **🚀 Bonus**: Enhanced version with additional features like doors, animated sprites, sound effects, and mouse controls

### 🎓 What You'll Experience

- **First-person 3D perspective** with smooth movement
- **Texture mapping** for realistic wall rendering
- **Collision detection** and physics
- **Interactive elements** (doors, sprites)
- **Sound effects** and audio integration
- **Mouse and keyboard controls**

## ✨ Features

### 🎯 Mandatory Version
- 🎮 **First-person 3D perspective** with smooth camera movement
- 🧱 **Texture mapping** for walls with customizable textures
- 🎨 **Customizable floor and ceiling colors** with RGB support
- 🗺️ **2D map parsing and validation** with error handling
- 🚶 **Player movement and rotation** with collision detection
- 🎯 **Raycasting engine** with optimized rendering
- 🖼️ **Multiple texture support** (North, South, East, West walls)

### 🚀 Bonus Version (Enhanced Features)
- 🚪 **Interactive doors** that can be opened/closed
- 🎭 **Animated sprites** (manjal) with frame-based animation
- 🔊 **Background sound effects** with audio threading
- 🖱️ **Mouse look controls** for immersive experience
- 🗺️ **Full map view toggle** for debugging
- 🎨 **Enhanced rendering** with door textures
- 🎵 **Audio threading support** for smooth gameplay

## 🛠️ Installation

### Prerequisites

- **macOS** (tested on macOS 22.1.0)
- **GCC compiler** (latest version recommended)
- **Make** (GNU Make 4.0+)
- **GLFW library** (for MLX42 graphics)

### 🏗️ Building the Project

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/cub3d-42.git
   cd cub3d-42
   ```

2. **Build the mandatory version**
   ```bash
   make
   ```

3. **Build the bonus version**
   ```bash
   make bonus
   ```

4. **Build both versions**
   ```bash
   make all
   ```

### 🔧 Available Make Commands

| Command | Description |
|---------|-------------|
| `make` | Builds the mandatory version |
| `make bonus` | Builds the bonus version |
| `make all` | Builds both versions |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and executables |
| `make re` | Rebuilds the project from scratch |

## 🎮 Usage

### 🚀 Running the Game

1. **Mandatory version:**
   ```bash
   ./cub3D <map_file.cub>
   ```

2. **Bonus version:**
   ```bash
   ./cub3D_bonus <map_file.cub>
   ```

### 📁 Example Maps

The project includes example map files:
- `mandatory/igo.cub` - Basic map for mandatory version
- `bonus/igo_bonus.cub` - Enhanced map with doors for bonus version

### 🧪 Testing Different Maps

```bash
# Test mandatory version
./cub3D mandatory/igo.cub

# Test bonus version
./cub3D_bonus bonus/igo_bonus.cub

# Test with custom map
./cub3D path/to/your/map.cub
```

## 🎯 Controls

### ⌨️ Keyboard Controls

| Key | Action |
|-----|--------|
| **W** | Move forward |
| **A** | Move left |
| **S** | Move backward |
| **D** | Move right |
| **←** | Rotate camera left |
| **→** | Rotate camera right |
| **ESC** | Exit game |

### 🖱️ Bonus Version Additional Controls

| Control | Action |
|---------|--------|
| **Mouse** | Look around (when cursor mode is enabled) |
| **M** | Toggle full map view |
| **Click** | Interact with doors |
| **Space** | Toggle cursor mode |

## 🗺️ Map Format

The game uses `.cub` files to define maps. Here's the complete format:

### 📝 Map File Structure

```
# Texture paths (required)
NO ./path/to/north_texture.png
SO ./path/to/south_texture.png
WE ./path/to/west_texture.png
EA ./path/to/east_texture.png

# Floor and ceiling colors (RGB format)
F 112,128,124
C 135,206,235

# Map layout (after empty line)
111111111111
10N000000001
100000000001
100000000001
111111111111
```

### 🧱 Map Elements

| Symbol | Description |
|--------|-------------|
| `1` | Wall (impassable) |
| `0` | Empty space (walkable) |
| `N` | Player spawn (facing North) |
| `S` | Player spawn (facing South) |
| `E` | Player spawn (facing East) |
| `W` | Player spawn (facing West) |
| `D` | Door (bonus version only) |

### ✅ Map Validation Rules

- **Must be rectangular** with consistent width
- **Must be surrounded by walls** (no gaps)
- **Must have exactly one player spawn point**
- **Must have valid texture paths** (PNG files)
- **Must have valid RGB colors** (0-255 range)
- **Must be properly closed** (no open areas)

## 📁 Project Structure

```
cub3d-42/
├── 📁 mandatory/                 # Mandatory version
│   ├── 📄 cub3d.c               # Main program
│   ├── 📁 includes/
│   │   └── 📄 cub3d.h           # Header file
│   ├── 📁 parsing/              # Map parsing logic
│   │   ├── 📄 parse_map.c       # Map validation
│   │   ├── 📄 parse_textures.c  # Texture parsing
│   │   └── 📄 parse_colors.c    # Color parsing
│   ├── 📁 rayCasting/           # Raycasting engine
│   │   ├── 📄 raycast.c         # Main raycasting
│   │   ├── 📄 wall_calc.c       # Wall calculations
│   │   └── 📄 sprite_calc.c     # Sprite calculations
│   ├── 📁 rendering/            # Graphics rendering
│   │   └── 📄 render.c          # Main rendering
│   ├── 📁 hooks/                # Input handling
│   │   └── 📄 hooks.c           # Event hooks
│   ├── 📁 mouvements/           # Player movement
│   │   └── 📄 movement.c        # Movement logic
│   ├── 📁 utils/                # Utility functions
│   │   ├── 📄 utils.c           # General utilities
│   │   └── 📄 error.c           # Error handling
│   ├── 📁 libft/                # Custom library functions
│   ├── 📁 gnl/                  # Get Next Line implementation
│   ├── 📁 g_col/                # Garbage collector
│   ├── 📁 textures/             # Wall textures
│   │   ├── 📄 north.png         # North wall texture
│   │   ├── 📄 south.png         # South wall texture
│   │   ├── 📄 east.png          # East wall texture
│   │   └── 📄 west.png          # West wall texture
│   └── 📄 igo.cub              # Example map
├── 📁 bonus/                    # Bonus version
│   ├── 📄 cub3d_bonus.c         # Main program
│   ├── 📁 includes/
│   │   └── 📄 cub3d_bonus.h     # Header file
│   ├── 📁 sfx/                  # Sound effects
│   │   ├── 📄 audio.c           # Audio management
│   │   └── 📄 background.mp3    # Background music
│   ├── 📁 textures/
│   │   ├── 📁 manjal/           # Animated sprites
│   │   │   ├── 📄 frame1.png    # Animation frame 1
│   │   │   ├── 📄 frame2.png    # Animation frame 2
│   │   │   └── 📄 frame3.png    # Animation frame 3
│   │   └── 📄 door.png          # Door texture
│   └── 📄 igo_bonus.cub        # Example map with doors
├── 📄 Makefile                  # Build configuration
└── 📄 README.md                 # This file
```

## 🛠️ Technologies Used

### Programming Languages
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

### Graphics & Libraries
![MLX42](https://img.shields.io/badge/MLX42-000000?style=for-the-badge&logo=opengl&logoColor=white)
![GLFW](https://img.shields.io/badge/GLFW-000000?style=for-the-badge&logo=glfw&logoColor=white)
![OpenGL](https://img.shields.io/badge/OpenGL-5586A4?style=for-the-badge&logo=opengl&logoColor=white)

### Build Tools
![Make](https://img.shields.io/badge/Make-000000?style=for-the-badge&logo=gnu&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-000000?style=for-the-badge&logo=gnu&logoColor=white)

### Development Tools
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![VS Code](https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)

### Audio
![Pthread](https://img.shields.io/badge/Pthread-000000?style=for-the-badge&logo=linux&logoColor=white)

## 🎨 Screenshots

*[Add screenshots of your game here]*

### 🎮 Gameplay Screenshots
- **3D Environment**: Show the 3D perspective
- **Texture Mapping**: Display wall textures
- **Interactive Elements**: Doors and sprites
- **Map View**: Full map toggle feature

## 🤝 Contributing

This is a 42 School project, but if you have suggestions or find bugs, feel free to contribute:

### How to Contribute

1. **Fork the repository**
   ```bash
   git clone https://github.com/yourusername/cub3d-42.git
   ```

2. **Create a feature branch**
   ```bash
   git checkout -b feature/AmazingFeature
   ```

3. **Make your changes**
   - Follow the existing code style
   - Add comments for complex logic
   - Test thoroughly

4. **Commit your changes**
   ```bash
   git commit -m 'Add some AmazingFeature'
   ```

5. **Push to the branch**
   ```bash
   git push origin feature/AmazingFeature
   ```

6. **Open a Pull Request**

### Contribution Guidelines

- Follow the existing code style and conventions
- Add tests for new features
- Update documentation as needed
- Ensure the game compiles without warnings
- Test on different map configurations

## 📄 License

This project is part of the 42 School curriculum. The code is written for educational purposes.

---

<div align="center">

**Made with ❤️ and lots of ☕**

*Experience the magic of 3D graphics with raycasting technology!*

[![GitHub stars](https://img.shields.io/github/stars/yourusername/cub3d-42?style=social)](https://github.com/yourusername/cub3d-42/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/yourusername/cub3d-42?style=social)](https://github.com/yourusername/cub3d-42/network)
[![GitHub issues](https://img.shields.io/github/issues/yourusername/cub3d-42)](https://github.com/yourusername/cub3d-42/issues)

**Author**: [Your Name]  
**School**: 42 School  
**Project**: Cub3D  
**Last updated**: December 2024

</div> 