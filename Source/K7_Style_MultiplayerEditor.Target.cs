// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class K7_Style_MultiplayerEditorTarget : TargetRules
{
	public K7_Style_MultiplayerEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "K7_Style_Multiplayer" } );
	}
}
