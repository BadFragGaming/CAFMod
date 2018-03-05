#define SPEED_STATIC 1e10
class CfgMovesBasic
{
	class DefaultDie;
	class DeadState;
    class Crew;     // External class reference
	class ManActions
	{
		KIA_LAV25_Commander = "KIA_LAV25_Commander";
		KIA_LAV25_Driver = "KIA_LAV25_Driver";
		KIA_LAV25_Gunner = "KIA_LAV25_Gunner";
		LAV25_Commander = "LAV25_Commander";
		LAV25_Commander_turnOut = "LAV25_Commander_turnOut";
		LAV25_Driver = "LAV25_Driver";
		LAV25_Driver_turnOut = "LAV25_Driver_turnOut";
		LAV25_DriverOut = "LAV25_DriverOut";
		LAV25_Gunner = "LAV25_Gunner";
		LAV25_Gunner_turnOut = "LAV25_Gunner_turnOut";
		T810Driver = "T810Driver";
		T810gunner = "T810gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	#define AnimPath \caf_lav3\data\anim
	class States
	{
		class Crew;
		class t810Driver_d : DefaultDie {
			actions = "DeadActions";
			file = "\caf_wheeled_c\data\anim\acr_t810Driver_d.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState", 0.1};
			soundEnabled = 0;
		};
		class t810gunner_d : t810Driver_d {
			file = "\caf_wheeled_c\data\anim\acr_t810gunner_d.rtm";
		};
  		class t810Driver: Crew
 	 	{
   		file = "\caf_wheeled_c\data\anim\acr_t810Driver.rtm";
   		interpolateTo[] = {"t810Driver_d",1};
  		};
  		class t810Gunner: Crew
 	 	{
   		file = "\caf_wheeled_c\data\anim\acr_t810gunner.rtm";
   		interpolateTo[] = {"t810gunner_d",1};
  		};
		/* Driver */
		
 		class KIA_LAV25_Driver: DeadState 
		{
			actions = "DeadActions";
			file = A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\KIA_APC_Wheeled_01_Driver.rtm;
			speed = 0.500000;
			looped = 0;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled = 0;
		};
		class LAV25_Driver: Crew 
		{
			file = A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\APC_Wheeled_01_Driver.rtm;
			interpolateTo[] = {KIA_LAV25_Driver,1};
		};
		class LAV25_Driver_turnOut: Crew 
		{
			file = A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\APC_Wheeled_01_Driver.rtm;//AnimPath\lav25_driver_turnout.rtm;
			interpolateTo[] = {KIA_LAV25_Driver,1};
		};
		
		/* Commander */
		
		class KIA_LAV25_Commander: DeadState 
		{
			actions = "DeadActions";
			file = A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\KIA_APC_Wheeled_01_Commander.rtm;
			speed = 0.500000;
			looped = 0;
			terminal = 1;
			connectTo[] = {DeadState,0.1};
			soundEnabled = 0;
		};
		class LAV25_Commander: Crew 
		{
			file = A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\APC_Wheeled_01_Commander.rtm;
			interpolateTo[] = {KIA_LAV25_Commander,1};
		};
		class LAV25_Commander_turnOut: LAV25_Commander 
		{
			file = A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\APC_Wheeled_01_Commander_out.rtm;
			interpolateTo[] = {KIA_LAV25_Commander,1};
		};
		
		/* Gunner */
		
		class KIA_LAV25_Gunner: KIA_LAV25_Commander
		{
			file=A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\KIA_APC_Wheeled_01_Gunner.rtm;
		};
		class LAV25_Gunner: Crew
		{
			file=A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\APC_Wheeled_01_Gunner.rtm;
			interpolateTo[]={KIA_LAV25_Gunner,1};
		};
		class LAV25_Gunner_turnout: Crew
		{
			file=A3\Armor_F_Beta\APC_Wheeled_01\Data\Anim\APC_Wheeled_01_Gunner_out.rtm;
			interpolateTo[]={KIA_LAV25_Gunner,1};
		};
	};
	#undef AnimPath
};