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
 * @file MocapMarker_msg.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_MOCAPMARKER_MSG_H_
#define _IDL_MSG_MOCAPMARKER_MSG_H_


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
#if defined(MocapMarker_msg_SOURCE)
#define MocapMarker_msg_DllAPI __declspec( dllexport )
#else
#define MocapMarker_msg_DllAPI __declspec( dllimport )
#endif // MocapMarker_msg_SOURCE
#else
#define MocapMarker_msg_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define MocapMarker_msg_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the structure MocapMarker_msg defined by the user in the IDL file.
     * @ingroup MOCAPMARKER_MSG
     */
    class MocapMarker_msg
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport MocapMarker_msg();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~MocapMarker_msg();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::MocapMarker_msg that will be copied.
         */
        eProsima_user_DllExport MocapMarker_msg(
                const MocapMarker_msg& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::MocapMarker_msg that will be copied.
         */
        eProsima_user_DllExport MocapMarker_msg(
                MocapMarker_msg&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::MocapMarker_msg that will be copied.
         */
        eProsima_user_DllExport MocapMarker_msg& operator =(
                const MocapMarker_msg& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::MocapMarker_msg that will be copied.
         */
        eProsima_user_DllExport MocapMarker_msg& operator =(
                MocapMarker_msg&& x);

        /*!
         * @brief Comparison operator.
         * @param x idl_msg::MocapMarker_msg object to compare.
         */
        eProsima_user_DllExport bool operator ==(
                const MocapMarker_msg& x);

        /*!
         * @brief Comparison operator.
         * @param x idl_msg::MocapMarker_msg object to compare.
         */
        eProsima_user_DllExport bool operator !=(
                const MocapMarker_msg& x);

        /*!
         * @brief This function copies the value in member header
         * @param _header New value to be copied in member header
         */
        eProsima_user_DllExport void header(
                const std::string& _header);

        /*!
         * @brief This function moves the value in member header
         * @param _header New value to be moved in member header
         */
        eProsima_user_DllExport void header(
                std::string&& _header);

        /*!
         * @brief This function returns a constant reference to member header
         * @return Constant reference to member header
         */
        eProsima_user_DllExport const std::string& header() const;

        /*!
         * @brief This function returns a reference to member header
         * @return Reference to member header
         */
        eProsima_user_DllExport std::string& header();
        /*!
         * @brief This function sets a value in member length
         * @param _length New value for member length
         */
        eProsima_user_DllExport void length(
                int32_t _length);

        /*!
         * @brief This function returns the value of member length
         * @return Value of member length
         */
        eProsima_user_DllExport int32_t length() const;

        /*!
         * @brief This function returns a reference to member length
         * @return Reference to member length
         */
        eProsima_user_DllExport int32_t& length();

        /*!
         * @brief This function copies the value in member occluded
         * @param _occluded New value to be copied in member occluded
         */
        eProsima_user_DllExport void occluded(
                const std::array<bool, 10>& _occluded);

        /*!
         * @brief This function moves the value in member occluded
         * @param _occluded New value to be moved in member occluded
         */
        eProsima_user_DllExport void occluded(
                std::array<bool, 10>&& _occluded);

        /*!
         * @brief This function returns a constant reference to member occluded
         * @return Constant reference to member occluded
         */
        eProsima_user_DllExport const std::array<bool, 10>& occluded() const;

        /*!
         * @brief This function returns a reference to member occluded
         * @return Reference to member occluded
         */
        eProsima_user_DllExport std::array<bool, 10>& occluded();
        /*!
         * @brief This function copies the value in member marker_x
         * @param _marker_x New value to be copied in member marker_x
         */
        eProsima_user_DllExport void marker_x(
                const std::array<float, 10>& _marker_x);

        /*!
         * @brief This function moves the value in member marker_x
         * @param _marker_x New value to be moved in member marker_x
         */
        eProsima_user_DllExport void marker_x(
                std::array<float, 10>&& _marker_x);

        /*!
         * @brief This function returns a constant reference to member marker_x
         * @return Constant reference to member marker_x
         */
        eProsima_user_DllExport const std::array<float, 10>& marker_x() const;

        /*!
         * @brief This function returns a reference to member marker_x
         * @return Reference to member marker_x
         */
        eProsima_user_DllExport std::array<float, 10>& marker_x();
        /*!
         * @brief This function copies the value in member marker_y
         * @param _marker_y New value to be copied in member marker_y
         */
        eProsima_user_DllExport void marker_y(
                const std::array<float, 10>& _marker_y);

        /*!
         * @brief This function moves the value in member marker_y
         * @param _marker_y New value to be moved in member marker_y
         */
        eProsima_user_DllExport void marker_y(
                std::array<float, 10>&& _marker_y);

        /*!
         * @brief This function returns a constant reference to member marker_y
         * @return Constant reference to member marker_y
         */
        eProsima_user_DllExport const std::array<float, 10>& marker_y() const;

        /*!
         * @brief This function returns a reference to member marker_y
         * @return Reference to member marker_y
         */
        eProsima_user_DllExport std::array<float, 10>& marker_y();
        /*!
         * @brief This function copies the value in member marker_z
         * @param _marker_z New value to be copied in member marker_z
         */
        eProsima_user_DllExport void marker_z(
                const std::array<float, 10>& _marker_z);

        /*!
         * @brief This function moves the value in member marker_z
         * @param _marker_z New value to be moved in member marker_z
         */
        eProsima_user_DllExport void marker_z(
                std::array<float, 10>&& _marker_z);

        /*!
         * @brief This function returns a constant reference to member marker_z
         * @return Constant reference to member marker_z
         */
        eProsima_user_DllExport const std::array<float, 10>& marker_z() const;

        /*!
         * @brief This function returns a reference to member marker_z
         * @return Reference to member marker_z
         */
        eProsima_user_DllExport std::array<float, 10>& marker_z();

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
                const idl_msg::MocapMarker_msg& data,
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

        std::string m_header;
        int32_t m_length;
        std::array<bool, 10> m_occluded;
        std::array<float, 10> m_marker_x;
        std::array<float, 10> m_marker_y;
        std::array<float, 10> m_marker_z;
    };
} // namespace idl_msg

#endif // _IDL_MSG_MOCAPMARKER_MSG_H_