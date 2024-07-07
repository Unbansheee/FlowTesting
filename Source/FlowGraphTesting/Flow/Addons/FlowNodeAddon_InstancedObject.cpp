// Fill out your copyright notice in the Description page of Project Settings.


#include "FlowNodeAddon_InstancedObject.h"

#include "FlowGraphTesting/Flow/InstancedObjectBase.h"

UFlowNodeAddon_InstancedObject::UFlowNodeAddon_InstancedObject()
{
	// Sets the default object type. When this is not set, copying and pasting works fine
	Object = CreateDefaultSubobject<UInstancedObjectBase>(TEXT("InstancedObjectTest"));
}

EFlowAddOnAcceptResult UFlowNodeAddon_InstancedObject::AcceptFlowNodeAddOnParent_Implementation(
	const UFlowNodeBase* ParentTemplate) const
{
	return EFlowAddOnAcceptResult::TentativeAccept;
}
