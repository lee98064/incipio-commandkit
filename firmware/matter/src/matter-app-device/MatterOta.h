#pragma once
#include <app/server/Server.h>
#include <data-model-providers/codedriven/CodeDrivenDataModelProvider.h>
CHIP_ERROR RegisterMatterOta(chip::app::CodeDrivenDataModelProvider &model);
CHIP_ERROR StartMatterOta();
void MatterOtaHealthy();
