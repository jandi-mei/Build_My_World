# Build My World Project

## Project Overview
The "Build My World" project is designed to simulate a robotic environment using the Gazebo simulator. In this project, you will create a custom world that includes a building structure and various objects, allowing for interaction through a C++ plugin. This project serves as a foundation for future robotics projects and enhances my skills in C++, Gazebo, and Linux.

## Packages and Tools Used
- **Gazebo**: A powerful robot simulation tool that allows for the creation of complex environments and interactions.
- **C++**: The primary programming language used to write the plugin that interacts with the Gazebo world.
- **Building Editor**: A tool within Gazebo used to design the building structure.
- **Model Editor**: A tool used to create and modify object models within the Gazebo environment.

## Project Structure
project_directory/

    ├── world/
    │ └── my_world.world 
    ├── model/ 
    │ ├── my_structure.model  
    │ └── my_object.model   
    ├── script/  
    │ └── my_plugin.cpp  
    └── CMakeLists.txt


## Step-by-Step Instructions to Run the Project

1. **Install Dependencies**:
   Ensure that you have Gazebo and the necessary libraries installed on your system. You can follow the installation instructions from the [Gazebo website](http://gazebosim.org/).

2. **Clone the Repository**:
   Clone your project repository to your local machine:
   ```bash
   git clone <repository_url>
   cd project_directory

3. **Build the Project**: 
Navigate to the project directory and build the project using CMake:

Bash:
  
    mkdir build
    cd build
    cmake ..
    make

4 . **Run the Gazebo Simulation**:
Launch the Gazebo simulator with your custom world:

bash

    gazebo world/my_world.world

5. **Load the Plugin**:
Ensure that your C++ plugin is loaded correctly in the Gazebo environment. You should see the welcome message printed in the terminal.
