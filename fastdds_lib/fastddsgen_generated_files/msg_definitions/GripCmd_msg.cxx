// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file GripCmd_msg.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "GripCmd_msg.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


idl_msg::GripCmd_msg::GripCmd_msg()
{
    // m_gripper com.eprosima.idl.parser.typecode.EnumTypeCode@b59d31
    m_gripper = idl_msg::grip_rot;
    // m_servo_1_deg com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1dd02175
    m_servo_1_deg = 0;
    // m_servo_2_deg com.eprosima.idl.parser.typecode.PrimitiveTypeCode@31206beb
    m_servo_2_deg = 0;
    // m_servo_3_deg com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3e77a1ed
    m_servo_3_deg = 0;
    // m_trigger_gripper com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3ffcd140
    m_trigger_gripper = false;
    // m_request_sensor com.eprosima.idl.parser.typecode.PrimitiveTypeCode@23bb8443
    m_request_sensor = false;

}

idl_msg::GripCmd_msg::~GripCmd_msg()
{






}

idl_msg::GripCmd_msg::GripCmd_msg(
        const GripCmd_msg& x)
{
    m_gripper = x.m_gripper;
    m_servo_1_deg = x.m_servo_1_deg;
    m_servo_2_deg = x.m_servo_2_deg;
    m_servo_3_deg = x.m_servo_3_deg;
    m_trigger_gripper = x.m_trigger_gripper;
    m_request_sensor = x.m_request_sensor;
}

idl_msg::GripCmd_msg::GripCmd_msg(
        GripCmd_msg&& x)
{
    m_gripper = x.m_gripper;
    m_servo_1_deg = x.m_servo_1_deg;
    m_servo_2_deg = x.m_servo_2_deg;
    m_servo_3_deg = x.m_servo_3_deg;
    m_trigger_gripper = x.m_trigger_gripper;
    m_request_sensor = x.m_request_sensor;
}

idl_msg::GripCmd_msg& idl_msg::GripCmd_msg::operator =(
        const GripCmd_msg& x)
{

    m_gripper = x.m_gripper;
    m_servo_1_deg = x.m_servo_1_deg;
    m_servo_2_deg = x.m_servo_2_deg;
    m_servo_3_deg = x.m_servo_3_deg;
    m_trigger_gripper = x.m_trigger_gripper;
    m_request_sensor = x.m_request_sensor;

    return *this;
}

idl_msg::GripCmd_msg& idl_msg::GripCmd_msg::operator =(
        GripCmd_msg&& x)
{

    m_gripper = x.m_gripper;
    m_servo_1_deg = x.m_servo_1_deg;
    m_servo_2_deg = x.m_servo_2_deg;
    m_servo_3_deg = x.m_servo_3_deg;
    m_trigger_gripper = x.m_trigger_gripper;
    m_request_sensor = x.m_request_sensor;

    return *this;
}

bool idl_msg::GripCmd_msg::operator ==(
        const GripCmd_msg& x)
{

    return (m_gripper == x.m_gripper && m_servo_1_deg == x.m_servo_1_deg && m_servo_2_deg == x.m_servo_2_deg && m_servo_3_deg == x.m_servo_3_deg && m_trigger_gripper == x.m_trigger_gripper && m_request_sensor == x.m_request_sensor);
}

bool idl_msg::GripCmd_msg::operator !=(
        const GripCmd_msg& x)
{
    return !(*this == x);
}

size_t idl_msg::GripCmd_msg::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t idl_msg::GripCmd_msg::getCdrSerializedSize(
        const idl_msg::GripCmd_msg& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void idl_msg::GripCmd_msg::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << (uint32_t)m_gripper;
    scdr << m_servo_1_deg;
    scdr << m_servo_2_deg;
    scdr << m_servo_3_deg;
    scdr << m_trigger_gripper;
    scdr << m_request_sensor;

}

void idl_msg::GripCmd_msg::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    {
        uint32_t enum_value = 0;
        dcdr >> enum_value;
        m_gripper = (idl_msg::GripperType)enum_value;
    }

    dcdr >> m_servo_1_deg;
    dcdr >> m_servo_2_deg;
    dcdr >> m_servo_3_deg;
    dcdr >> m_trigger_gripper;
    dcdr >> m_request_sensor;
}

/*!
 * @brief This function sets a value in member gripper
 * @param _gripper New value for member gripper
 */
void idl_msg::GripCmd_msg::gripper(
        idl_msg::GripperType _gripper)
{
    m_gripper = _gripper;
}

/*!
 * @brief This function returns the value of member gripper
 * @return Value of member gripper
 */
idl_msg::GripperType idl_msg::GripCmd_msg::gripper() const
{
    return m_gripper;
}

/*!
 * @brief This function returns a reference to member gripper
 * @return Reference to member gripper
 */
idl_msg::GripperType& idl_msg::GripCmd_msg::gripper()
{
    return m_gripper;
}

/*!
 * @brief This function sets a value in member servo_1_deg
 * @param _servo_1_deg New value for member servo_1_deg
 */
void idl_msg::GripCmd_msg::servo_1_deg(
        int32_t _servo_1_deg)
{
    m_servo_1_deg = _servo_1_deg;
}

/*!
 * @brief This function returns the value of member servo_1_deg
 * @return Value of member servo_1_deg
 */
int32_t idl_msg::GripCmd_msg::servo_1_deg() const
{
    return m_servo_1_deg;
}

/*!
 * @brief This function returns a reference to member servo_1_deg
 * @return Reference to member servo_1_deg
 */
int32_t& idl_msg::GripCmd_msg::servo_1_deg()
{
    return m_servo_1_deg;
}

/*!
 * @brief This function sets a value in member servo_2_deg
 * @param _servo_2_deg New value for member servo_2_deg
 */
void idl_msg::GripCmd_msg::servo_2_deg(
        int32_t _servo_2_deg)
{
    m_servo_2_deg = _servo_2_deg;
}

/*!
 * @brief This function returns the value of member servo_2_deg
 * @return Value of member servo_2_deg
 */
int32_t idl_msg::GripCmd_msg::servo_2_deg() const
{
    return m_servo_2_deg;
}

/*!
 * @brief This function returns a reference to member servo_2_deg
 * @return Reference to member servo_2_deg
 */
int32_t& idl_msg::GripCmd_msg::servo_2_deg()
{
    return m_servo_2_deg;
}

/*!
 * @brief This function sets a value in member servo_3_deg
 * @param _servo_3_deg New value for member servo_3_deg
 */
void idl_msg::GripCmd_msg::servo_3_deg(
        int32_t _servo_3_deg)
{
    m_servo_3_deg = _servo_3_deg;
}

/*!
 * @brief This function returns the value of member servo_3_deg
 * @return Value of member servo_3_deg
 */
int32_t idl_msg::GripCmd_msg::servo_3_deg() const
{
    return m_servo_3_deg;
}

/*!
 * @brief This function returns a reference to member servo_3_deg
 * @return Reference to member servo_3_deg
 */
int32_t& idl_msg::GripCmd_msg::servo_3_deg()
{
    return m_servo_3_deg;
}

/*!
 * @brief This function sets a value in member trigger_gripper
 * @param _trigger_gripper New value for member trigger_gripper
 */
void idl_msg::GripCmd_msg::trigger_gripper(
        bool _trigger_gripper)
{
    m_trigger_gripper = _trigger_gripper;
}

/*!
 * @brief This function returns the value of member trigger_gripper
 * @return Value of member trigger_gripper
 */
bool idl_msg::GripCmd_msg::trigger_gripper() const
{
    return m_trigger_gripper;
}

/*!
 * @brief This function returns a reference to member trigger_gripper
 * @return Reference to member trigger_gripper
 */
bool& idl_msg::GripCmd_msg::trigger_gripper()
{
    return m_trigger_gripper;
}

/*!
 * @brief This function sets a value in member request_sensor
 * @param _request_sensor New value for member request_sensor
 */
void idl_msg::GripCmd_msg::request_sensor(
        bool _request_sensor)
{
    m_request_sensor = _request_sensor;
}

/*!
 * @brief This function returns the value of member request_sensor
 * @return Value of member request_sensor
 */
bool idl_msg::GripCmd_msg::request_sensor() const
{
    return m_request_sensor;
}

/*!
 * @brief This function returns a reference to member request_sensor
 * @return Reference to member request_sensor
 */
bool& idl_msg::GripCmd_msg::request_sensor()
{
    return m_request_sensor;
}


size_t idl_msg::GripCmd_msg::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;









    return current_align;
}

bool idl_msg::GripCmd_msg::isKeyDefined()
{
    return false;
}

void idl_msg::GripCmd_msg::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
          
}

