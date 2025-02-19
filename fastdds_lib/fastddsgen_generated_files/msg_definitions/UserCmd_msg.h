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
 * @file UserCmd_msg.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_USERCMD_MSG_H_
#define _IDL_MSG_USERCMD_MSG_H_


#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(UserCmd_msg_SOURCE)
#define UserCmd_msg_DllAPI __declspec( dllexport )
#else
#define UserCmd_msg_DllAPI __declspec( dllimport )
#endif // UserCmd_msg_SOURCE
#else
#define UserCmd_msg_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define UserCmd_msg_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the enumeration User_cmd defined by the user in the IDL file.
     * @ingroup USERCMD_MSG
     */
    enum User_cmd : uint32_t
    {
        ui_null,
        ui_status,
        ui_land,
        ui_emg_land,
        ui_hover
    };
    /*!
     * @brief This class represents the structure UserCmd_msg defined by the user in the IDL file.
     * @ingroup USERCMD_MSG
     */
    class UserCmd_msg
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport UserCmd_msg();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~UserCmd_msg();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::UserCmd_msg that will be copied.
         */
        eProsima_user_DllExport UserCmd_msg(
                const UserCmd_msg& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::UserCmd_msg that will be copied.
         */
        eProsima_user_DllExport UserCmd_msg(
                UserCmd_msg&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::UserCmd_msg that will be copied.
         */
        eProsima_user_DllExport UserCmd_msg& operator =(
                const UserCmd_msg& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::UserCmd_msg that will be copied.
         */
        eProsima_user_DllExport UserCmd_msg& operator =(
                UserCmd_msg&& x);

        /*!
         * @brief Comparison operator.
         * @param x idl_msg::UserCmd_msg object to compare.
         */
        eProsima_user_DllExport bool operator ==(
                const UserCmd_msg& x);

        /*!
         * @brief Comparison operator.
         * @param x idl_msg::UserCmd_msg object to compare.
         */
        eProsima_user_DllExport bool operator !=(
                const UserCmd_msg& x);

        /*!
         * @brief This function sets a value in member command
         * @param _command New value for member command
         */
        eProsima_user_DllExport void command(
                idl_msg::User_cmd _command);

        /*!
         * @brief This function returns the value of member command
         * @return Value of member command
         */
        eProsima_user_DllExport idl_msg::User_cmd command() const;

        /*!
         * @brief This function returns a reference to member command
         * @return Reference to member command
         */
        eProsima_user_DllExport idl_msg::User_cmd& command();


        /*!
         * @brief This function returns the maximum serialized size of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function returns the serialized size of a data depending on the buffer alignment.
         * @param data Data which is calculated its serialized size.
         * @param current_alignment Buffer alignment.
         * @return Serialized size.
         */
        eProsima_user_DllExport static size_t getCdrSerializedSize(
                const idl_msg::UserCmd_msg& data,
                size_t current_alignment = 0);


        /*!
         * @brief This function serializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serialize(
                eprosima::fastcdr::Cdr& cdr) const;

        /*!
         * @brief This function deserializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void deserialize(
                eprosima::fastcdr::Cdr& cdr);



        /*!
         * @brief This function returns the maximum serialized size of the Key of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function tells you if the Key has been defined for this type
         */
        eProsima_user_DllExport static bool isKeyDefined();

        /*!
         * @brief This function serializes the key members of an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serializeKey(
                eprosima::fastcdr::Cdr& cdr) const;

    private:

        idl_msg::User_cmd m_command;
    };
} // namespace idl_msg

#endif // _IDL_MSG_USERCMD_MSG_H_