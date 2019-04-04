
/*
 * This file was automatically generated by sdbus-c++-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__celsius_thermometer_adaptor_h__adaptor__H__
#define __sdbuscpp__celsius_thermometer_adaptor_h__adaptor__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace sdbuscpp {
namespace stresstests {
namespace celsius {

class thermometer_adaptor
{
public:
    static constexpr const char* interfaceName = "org.sdbuscpp.stresstests.celsius.thermometer";

protected:
    thermometer_adaptor(sdbus::IObject& object)
        : object_(object)
    {
        object_.registerMethod("getCurrentTemperature").onInterface(interfaceName).implementedAs([this](){ return this->getCurrentTemperature(); });
    }

private:
    virtual uint32_t getCurrentTemperature() = 0;

private:
    sdbus::IObject& object_;
};

}}}} // namespaces

#endif
