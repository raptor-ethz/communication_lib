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
 * @file QuadPosCmd_msg.cpp
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

#include "QuadPosCmd_msg.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::QuadPosCmd_msg::QuadPosCmd_msg()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@2f112965

    // m_position com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@1a04f701

    // m_yaw_angle com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4e91d63f
    m_yaw_angle = 0.0;

}

idl_msg::QuadPosCmd_msg::~QuadPosCmd_msg()
{



}

idl_msg::QuadPosCmd_msg::QuadPosCmd_msg(
        const QuadPosCmd_msg& x)
{
    m_header = x.m_header;
    m_position = x.m_position;
    m_yaw_angle = x.m_yaw_angle;
}

idl_msg::QuadPosCmd_msg::QuadPosCmd_msg(
        QuadPosCmd_msg&& x)
{
    m_header = std::move(x.m_header);
    m_position = std::move(x.m_position);
    m_yaw_angle = x.m_yaw_angle;
}

idl_msg::QuadPosCmd_msg& idl_msg::QuadPosCmd_msg::operator =(
        const QuadPosCmd_msg& x)
{

    m_header = x.m_header;
    m_position = x.m_position;
    m_yaw_angle = x.m_yaw_angle;

    return *this;
}

idl_msg::QuadPosCmd_msg& idl_msg::QuadPosCmd_msg::operator =(
        QuadPosCmd_msg&& x)
{

    m_header = std::move(x.m_header);
    m_position = std::move(x.m_position);
    m_yaw_angle = x.m_yaw_angle;

    return *this;
}

bool idl_msg::QuadPosCmd_msg::operator ==(
        const QuadPosCmd_msg& x)
{

    return (m_header == x.m_header && m_position == x.m_position && m_yaw_angle == x.m_yaw_angle);
}

bool idl_msg::QuadPosCmd_msg::operator !=(
        const QuadPosCmd_msg& x)
{
    return !(*this == x);
}

size_t idl_msg::QuadPosCmd_msg::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header_msg::getMaxCdrSerializedSize(current_alignment);
    current_alignment += idl_msg::Vector3f_msg::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t idl_msg::QuadPosCmd_msg::getCdrSerializedSize(
        const idl_msg::QuadPosCmd_msg& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header_msg::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += idl_msg::Vector3f_msg::getCdrSerializedSize(data.position(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void idl_msg::QuadPosCmd_msg::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_position;
    scdr << m_yaw_angle;

}

void idl_msg::QuadPosCmd_msg::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_position;
    dcdr >> m_yaw_angle;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void idl_msg::QuadPosCmd_msg::header(
        const idl_msg::Header_msg& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void idl_msg::QuadPosCmd_msg::header(
        idl_msg::Header_msg&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const idl_msg::Header_msg& idl_msg::QuadPosCmd_msg::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
idl_msg::Header_msg& idl_msg::QuadPosCmd_msg::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member position
 * @param _position New value to be copied in member position
 */
void idl_msg::QuadPosCmd_msg::position(
        const idl_msg::Vector3f_msg& _position)
{
    m_position = _position;
}

/*!
 * @brief This function moves the value in member position
 * @param _position New value to be moved in member position
 */
void idl_msg::QuadPosCmd_msg::position(
        idl_msg::Vector3f_msg&& _position)
{
    m_position = std::move(_position);
}

/*!
 * @brief This function returns a constant reference to member position
 * @return Constant reference to member position
 */
const idl_msg::Vector3f_msg& idl_msg::QuadPosCmd_msg::position() const
{
    return m_position;
}

/*!
 * @brief This function returns a reference to member position
 * @return Reference to member position
 */
idl_msg::Vector3f_msg& idl_msg::QuadPosCmd_msg::position()
{
    return m_position;
}
/*!
 * @brief This function sets a value in member yaw_angle
 * @param _yaw_angle New value for member yaw_angle
 */
void idl_msg::QuadPosCmd_msg::yaw_angle(
        float _yaw_angle)
{
    m_yaw_angle = _yaw_angle;
}

/*!
 * @brief This function returns the value of member yaw_angle
 * @return Value of member yaw_angle
 */
float idl_msg::QuadPosCmd_msg::yaw_angle() const
{
    return m_yaw_angle;
}

/*!
 * @brief This function returns a reference to member yaw_angle
 * @return Reference to member yaw_angle
 */
float& idl_msg::QuadPosCmd_msg::yaw_angle()
{
    return m_yaw_angle;
}


size_t idl_msg::QuadPosCmd_msg::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool idl_msg::QuadPosCmd_msg::isKeyDefined()
{
    return false;
}

void idl_msg::QuadPosCmd_msg::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}

