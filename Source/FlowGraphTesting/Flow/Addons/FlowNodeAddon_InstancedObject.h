// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AddOns/FlowNodeAddOn.h"

#include "FlowNodeAddon_InstancedObject.generated.h"

class UInstancedObjectBase;
/**
 * 
 */
UCLASS()
class FLOWGRAPHTESTING_API UFlowNodeAddon_InstancedObject : public UFlowNodeAddOn
{
	GENERATED_BODY()

	UFlowNodeAddon_InstancedObject();
	
public:
	virtual EFlowAddOnAcceptResult AcceptFlowNodeAddOnParent_Implementation(const UFlowNodeBase* ParentTemplate) const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
	UInstancedObjectBase* Object;
};
