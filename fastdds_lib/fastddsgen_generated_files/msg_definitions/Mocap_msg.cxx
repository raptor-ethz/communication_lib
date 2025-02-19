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
 * @file Mocap_msg.cpp
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

#include "Mocap_msg.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::Mocap_msg::Mocap_msg()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@12d3a4e9

    // m_occluded com.eprosima.idl.parser.typecode.PrimitiveTypeCode@240237d2
    m_occluded = false;
    // m_position com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@25a65b77

    // m_orientation com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@2ed0fbae

    // m_quaternion com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@212bf671

    // m_latency com.eprosima.idl.parser.typecode.PrimitiveTypeCode@14a2f921
    m_latency = 0.0;

}

idl_msg::Mocap_msg::~Mocap_msg()
{






}

idl_msg::Mocap_msg::Mocap_msg(
        const Mocap_msg& x)
{
    m_header = x.m_header;
    m_occluded = x.m_occluded;
    m_position = x.m_position;
    m_orientation = x.m_orientation;
    m_quaternion = x.m_quaternion;
    m_latency = x.m_latency;
}

idl_msg::Mocap_msg::Mocap_msg(
        Mocap_msg&& x)
{
    m_header = std::move(x.m_header);
    m_occluded = x.m_occluded;
    m_position = std::move(x.m_position);
    m_orientation = std::move(x.m_orientation);
    m_quaternion = std::move(x.m_quaternion);
    m_latency = x.m_latency;
}

idl_msg::Mocap_msg& idl_msg::Mocap_msg::operator =(
        const Mocap_msg& x)
{

    m_header = x.m_header;
    m_occluded = x.m_occluded;
    m_position = x.m_position;
    m_orientation = x.m_orientation;
    m_quaternion = x.m_quaternion;
    m_latency = x.m_latency;

    return *this;
}

idl_msg::Mocap_msg& idl_msg::Mocap_msg::operator =(
        Mocap_msg&& x)
{

    m_header = std::move(x.m_header);
    m_occluded = x.m_occluded;
    m_position = std::move(x.m_position);
    m_orientation = std::move(x.m_orientation);
    m_quaternion = std::move(x.m_quaternion);
    m_latency = x.m_latency;

    return *this;
}

bool idl_msg::Mocap_msg::operator ==(
        const Mocap_msg& x)
{

    return (m_header == x.m_header && m_occluded == x.m_occluded && m_position == x.m_position && m_orientation == x.m_orientation && m_quaternion == x.m_quaternion && m_latency == x.m_latency);
}

bool idl_msg::Mocap_msg::operator !=(
        const Mocap_msg& x)
{
    return !(*this == x);
}

size_t idl_msg::Mocap_msg::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header_msg::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += idl_msg::Vector3f_msg::getMaxCdrSerializedSize(current_alignment);
    current_alignment += idl_msg::Euler_angle_msg::getMaxCdrSerializedSize(current_alignment);
    current_alignment += idl_msg::Quaternion_msg::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t idl_msg::Mocap_msg::getCdrSerializedSize(
        const idl_msg::Mocap_msg& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header_msg::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += idl_msg::Vector3f_msg::getCdrSerializedSize(data.position(), current_alignment);
    current_alignment += idl_msg::Euler_angle_msg::getCdrSerializedSize(data.orientation(), current_alignment);
    current_alignment += idl_msg::Quaternion_msg::getCdrSerializedSize(data.quaternion(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void idl_msg::Mocap_msg::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_occluded;
    scdr << m_position;
    scdr << m_orientation;
    scdr << m_quaternion;
    scdr << m_latency;

}

void idl_msg::Mocap_msg::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_occluded;
    dcdr >> m_position;
    dcdr >> m_orientation;
    dcdr >> m_quaternion;
    dcdr >> m_latency;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void idl_msg::Mocap_msg::header(
        const idl_msg::Header_msg& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void idl_msg::Mocap_msg::header(
        idl_msg::Header_msg&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const idl_msg::Header_msg& idl_msg::Mocap_msg::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
idl_msg::Header_msg& idl_msg::Mocap_msg::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member occluded
 * @param _occluded New value for member occluded
 */
void idl_msg::Mocap_msg::occluded(
        bool _occluded)
{
    m_occluded = _occluded;
}

/*!
 * @brief This function returns the value of member occluded
 * @return Value of member occluded
 */
bool idl_msg::Mocap_msg::occluded() const
{
    return m_occluded;
}

/*!
 * @brief This function returns a reference to member occluded
 * @return Reference to member occluded
 */
bool& idl_msg::Mocap_msg::occluded()
{
    return m_occluded;
}

/*!
 * @brief This function copies the value in member position
 * @param _position New value to be copied in member position
 */
void idl_msg::Mocap_msg::position(
        const idl_msg::Vector3f_msg& _position)
{
    m_position = _position;
}

/*!
 * @brief This function moves the value in member position
 * @param _position New value to be moved in member position
 */
void idl_msg::Mocap_msg::position(
        idl_msg::Vector3f_msg&& _position)
{
    m_position = std::move(_position);
}

/*!
 * @brief This function returns a constant reference to member position
 * @return Constant reference to member position
 */
const idl_msg::Vector3f_msg& idl_msg::Mocap_msg::position() const
{
    return m_position;
}

/*!
 * @brief This function returns a reference to member position
 * @return Reference to member position
 */
idl_msg::Vector3f_msg& idl_msg::Mocap_msg::position()
{
    return m_position;
}
/*!
 * @brief This function copies the value in member orientation
 * @param _orientation New value to be copied in member orientation
 */
void idl_msg::Mocap_msg::orientation(
        const idl_msg::Euler_angle_msg& _orientation)
{
    m_orientation = _orientation;
}

/*!
 * @brief This function moves the value in member orientation
 * @param _orientation New value to be moved in member orientation
 */
void idl_msg::Mocap_msg::orientation(
        idl_msg::Euler_angle_msg&& _orientation)
{
    m_orientation = std::move(_orientation);
}

/*!
 * @brief This function returns a constant reference to member orientation
 * @return Constant reference to member orientation
 */
const idl_msg::Euler_angle_msg& idl_msg::Mocap_msg::orientation() const
{
    return m_orientation;
}

/*!
 * @brief This function returns a reference to member orientation
 * @return Reference to member orientation
 */
idl_msg::Euler_angle_msg& idl_msg::Mocap_msg::orientation()
{
    return m_orientation;
}
/*!
 * @brief This function copies the value in member quaternion
 * @param _quaternion New value to be copied in member quaternion
 */
void idl_msg::Mocap_msg::quaternion(
        const idl_msg::Quaternion_msg& _quaternion)
{
    m_quaternion = _quaternion;
}

/*!
 * @brief This function moves the value in member quaternion
 * @param _quaternion New value to be moved in member quaternion
 */
void idl_msg::Mocap_msg::quaternion(
        idl_msg::Quaternion_msg&& _quaternion)
{
    m_quaternion = std::move(_quaternion);
}

/*!
 * @brief This function returns a constant reference to member quaternion
 * @return Constant reference to member quaternion
 */
const idl_msg::Quaternion_msg& idl_msg::Mocap_msg::quaternion() const
{
    return m_quaternion;
}

/*!
 * @brief This function returns a reference to member quaternion
 * @return Reference to member quaternion
 */
idl_msg::Quaternion_msg& idl_msg::Mocap_msg::quaternion()
{
    return m_quaternion;
}
/*!
 * @brief This function sets a value in member latency
 * @param _latency New value for member latency
 */
void idl_msg::Mocap_msg::latency(
        float _latency)
{
    m_latency = _latency;
}

/*!
 * @brief This function returns the value of member latency
 * @return Value of member latency
 */
float idl_msg::Mocap_msg::latency() const
{
    return m_latency;
}

/*!
 * @brief This function returns a reference to member latency
 * @return Reference to member latency
 */
float& idl_msg::Mocap_msg::latency()
{
    return m_latency;
}


size_t idl_msg::Mocap_msg::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;









    return current_align;
}

bool idl_msg::Mocap_msg::isKeyDefined()
{
    return false;
}

void idl_msg::Mocap_msg::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
          
}

