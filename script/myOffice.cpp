#include <gazebo/gazebo.hh>

namespace gazebo
{
 class myOfficePlugin : public WorldPlugin
   {
    public: myOfficePlugin(): WorldPlugin()
	{
	  printf("Welcome to Jacqueline’s World!\n");
	}
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
	{
	  
	}
   };
   GZ_REGISTER_WORLD_PLUGIN(myOfficePlugin);
}
