#pragma once

#include "Red/VehicleSystem.hpp"

namespace App
{
struct VehicleGarageComponentEx : Red::vehicleGarageComponent
{
    void LoadSummonSetup()
    {
        Raw::VehicleGarageComponent::LoadSummonSetup(this);
    }
};
}

RTTI_EXPAND_CLASS(Red::vehicleGarageComponent, App::VehicleGarageComponentEx, {
    RTTI_METHOD(LoadSummonSetup);
});
