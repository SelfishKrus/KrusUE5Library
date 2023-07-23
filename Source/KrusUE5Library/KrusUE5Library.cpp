// Fill out your copyright notice in the Description page of Project Settings.

#include "KrusUE5Library.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"

void FKrusShaderModule::StartupModule()
{
	//#if (ENGINE_MINOR_VERSION >= 21)
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
	//#endif

}

void FKrusShaderModule::ShutdownModule(){}

IMPLEMENT_PRIMARY_GAME_MODULE( FKrusShaderModule, Project, "Project" );
