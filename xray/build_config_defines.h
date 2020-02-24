#pragma once

// CALLBACKS
	#define EXTENDED_ITEM_CALLBACKS							// (eItemToBelt, eItemToSlot, eItemToRuck)
	#define EXTENDED_WEAPON_CALLBACKS						// (eOnWeaponZoomIn, eOnWeaponZoomOut, eOnWeaponJammed)
	#define INVENTORY_UPGRADE_CALLBACKS						// calls lua function inventory_upgrades.effect_upgrade_item
	#define ACTOR_BEFORE_DEATH_CALLBACK						// For extending the life of the actor to fake death or do other tasks that need to happen before actor is dead
	#define INPUT_CALLBACKS									// (eKeyPress, eKeyRelease, eKeyHold)
	//#define MOUSE_INPUT_CALLBACKS							// (eMouseMove, eMouseWheel)
	#define ENGINE_LUA_ALIFE_STORAGE_MANAGER_CALLBACKS		// calls lua functions from engine in a script named alife_storage_manager.script  (alife_storage_manager.CALifeStorageManager_save) and (alife_storage_manager.CALifeStorageManager_load)
	#define ENGINE_LUA_ALIFE_UPDAGE_MANAGER_CALLBACKS		// calls lua function named on_before_change_level and on_after_new_game in _G.script when enabled
//-CALLBACKS

// SCRIPTS:
	#define MORE_INVENTORY_SLOTS							// Adds 5 more slots CUSTOM_SLOT_1..5
	#define GAME_OBJECT_EXTENDED_EXPORTS					// see: script_game_object*.cpp/h
	#define GAME_OBJECT_TESTING_EXPORTS						// see: script_game_object4.cpp  functions for object testing (ie. is_stalker(), is_heli())
	#define NAMESPACE_LEVEL_EXPORTS							// see: level_script.cpp
	#define INI_FILE_EXTENDED_EXPORTS						// see: script_ini_file_script.cpp
	#define ENABLE_CAR										// reimplements car along with new callbacks (eOnVehicleAttached, eOnVehicleDetached) and new game_object actor methods get_attached_vehicle(), attach_vehicle() and detach_vehicle()
//-SCRIPTS

// VISUAL:
	#define TREE_WIND_EFFECT								// configurable tree sway, can be used to have trees sway more during storms or lightly on clear days.
//-VISUAL

//Gamma-Ray CMD
	//#define MFS_DEVELOPER_CMD
//Gamma-Ray CMD