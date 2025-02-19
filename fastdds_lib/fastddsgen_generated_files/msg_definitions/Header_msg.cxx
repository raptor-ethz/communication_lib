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
 * @file Header_msg.cpp
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

#include "Header_msg.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::Header_msg::Header_msg()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@51b7e5df
    m_timestamp = 0;
    // m_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@c8e4bb0
    m_id = 0;
    // m_description com.eprosima.idl.parser.typecode.StringTypeCode@29ba4338
    m_description ="";

}

idl_msg::Header_msg::~Header_msg()
{



}

idl_msg::Header_msg::Header_msg(
        const Header_msg& x)
{
    m_timestamp = x.m_timestamp;
    m_id = x.m_id;
    m_description = x.m_description;
}

idl_msg::Header_msg::Header_msg(
        Header_msg&& x)
{
    m_timestamp = x.m_timestamp;
    m_id = x.m_id;
    m_description = std::move(x.m_description);
}

idl_msg::Header_msg& idl_msg::Header_msg::operator =(
        const Header_msg& x)
{

    m_timestamp = x.m_timestamp;
    m_id = x.m_id;
    m_description = x.m_description;

    return *this;
}

idl_msg::Header_msg& idl_msg::Header_msg::operator =(
        Header_msg&& x)
{

    m_timestamp = x.m_timestamp;
    m_id = x.m_id;
    m_description = std::move(x.m_description);

    return *this;
}

bool idl_msg::Header_msg::operator ==(
        const Header_msg& x)
{

    return (m_timestamp == x.m_timestamp && m_id == x.m_id && m_description == x.m_description);
}

bool idl_msg::Header_msg::operator !=(
        const Header_msg& x)
{
    return !(*this == x);
}

size_t idl_msg::Header_msg::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t idl_msg::Header_msg::getCdrSerializedSize(
        const idl_msg::Header_msg& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.description().size() + 1;


    return current_alignment - initial_alignment;
}

void idl_msg::Header_msg::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_timestamp;
    scdr << m_id;
    scdr << m_description;

}

void idl_msg::Header_msg::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_id;
    dcdr >> m_description;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void idl_msg::Header_msg::timestamp(
        int32_t _timestamp)
{
    m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
int32_t idl_msg::Header_msg::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
int32_t& idl_msg::Header_msg::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member id
 * @param _id New value for member id
 */
void idl_msg::Header_msg::id(
        int32_t _id)
{
    m_id = _id;
}

/*!
 * @brief This function returns the value of member id
 * @return Value of member id
 */
int32_t idl_msg::Header_msg::id() const
{
    return m_id;
}

/*!
 * @brief This function returns a reference to member id
 * @return Reference to member id
 */
int32_t& idl_msg::Header_msg::id()
{
    return m_id;
}

/*!
 * @brief This function copies the value in member description
 * @param _description New value to be copied in member description
 */
void idl_msg::Header_msg::description(
        const std::string& _description)
{
    m_description = _description;
}

/*!
 * @brief This function moves the value in member description
 * @param _description New value to be moved in member description
 */
void idl_msg::Header_msg::description(
        std::string&& _description)
{
    m_description = std::move(_description);
}

/*!
 * @brief This function returns a constant reference to member description
 * @return Constant reference to member description
 */
const std::string& idl_msg::Header_msg::description() const
{
    return m_description;
}

/*!
 * @brief This function returns a reference to member description
 * @return Reference to member description
 */
std::string& idl_msg::Header_msg::description()
{
    return m_description;
}

size_t idl_msg::Header_msg::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool idl_msg::Header_msg::isKeyDefined()
{
    return false;
}

void idl_msg::Header_msg::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}

