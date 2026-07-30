#pragma once

namespace Raw::VehicleGarageComponent
{
constexpr auto LoadSummonSetup = Core::RawFunc<
    /* addr = */ Red::AddressLib::VehicleGarageComponent_LoadSummonSetup,
    /* type = */ void (*)(Red::vehicleGarageComponent* aComponent)>();
}

namespace Raw::VehicleSystem
{
constexpr auto ToggleGarageVehicle = Core::RawFunc<
    /* addr = */ Red::AddressLib::VehicleSystem_ToggleGarageVehicle,
    /* type = */ bool (*)(Red::VehicleSystem* aSystem, const Red::GarageVehicleID& aVehicleID, bool aEnable)>();
}
