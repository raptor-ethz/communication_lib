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
 * @file QuadFeedback_msg.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_QUADFEEDBACK_MSG_H_
#define _IDL_MSG_QUADFEEDBACK_MSG_H_

#include "QuadStatus_msg.h"

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
#if defined(QuadFeedback_msg_SOURCE)
#define QuadFeedback_msg_DllAPI __declspec( dllexport )
#else
#define QuadFeedback_msg_DllAPI __declspec( dllimport )
#endif // QuadFeedback_msg_SOURCE
#else
#define QuadFeedback_msg_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define QuadFeedback_msg_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the enumeration FeedbackType defined by the user in the IDL file.
     * @ingroup QUADFEEDBACK_MSG
     */
    enum FeedbackType : uint32_t
    {
        fb_null,
        fb_status,
        fb_arm,
        fb_disarm,
        fb_takeoff,
        fb_land,
        fb_hover,
        fb_offboard
    };
    /*!
     * @brief This class represents the enumeration ResultType defined by the user in the IDL file.
     * @ingroup QUADFEEDBACK_MSG
     */
    enum ResultType : uint32_t
    {
        res_null,
        res_success,
        res_fail,
        res_disaster
    };
    /*!
     * @brief This class represents the structure QuadFeedback_msg defined by the user in the IDL file.
     * @ingroup QUADFEEDBACK_MSG
     */
    class QuadFeedback_msg
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport QuadFeedback_msg();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~QuadFeedback_msg();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::QuadFeedback_msg that will be copied.
         */
        eProsima_user_DllExport QuadFeedback_msg(
                const QuadFeedback_msg& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::QuadFeedback_msg that will be copied.
         */
        eProsima_user_DllExport QuadFeedback_msg(
                QuadFeedback_msg&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::QuadFeedback_msg that will be copied.
         */
        eProsima_user_DllExport QuadFeedback_msg& operator =(
                const QuadFeedback_msg& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::QuadFeedback_msg that will be copied.
         */
        eProsima_user_DllExport QuadFeedback_msg& operator =(
                QuadFeedback_msg&& x);

        /*!
         * @brief Comparison operator.
         * @param x idl_msg::QuadFeedback_msg object to compare.
         */
        eProsima_user_DllExport bool operator ==(
                const QuadFeedback_msg& x);

        /*!
         * @brief Comparison operator.
         * @param x idl_msg::QuadFeedback_msg object to compare.
         */
        eProsima_user_DllExport bool operator !=(
                const QuadFeedback_msg& x);

        /*!
         * @brief This function sets a value in member feedback
         * @param _feedback New value for member feedback
         */
        eProsima_user_DllExport void feedback(
                idl_msg::FeedbackType _feedback);

        /*!
         * @brief This function returns the value of member feedback
         * @return Value of member feedback
         */
        eProsima_user_DllExport idl_msg::FeedbackType feedback() const;

        /*!
         * @brief This function returns a reference to member feedback
         * @return Reference to member feedback
         */
        eProsima_user_DllExport idl_msg::FeedbackType& feedback();

        /*!
         * @brief This function copies the value in member status
         * @param _status New value to be copied in member status
         */
        eProsima_user_DllExport void status(
                const idl_msg::QuadStatus_msg& _status);

        /*!
         * @brief This function moves the value in member status
         * @param _status New value to be moved in member status
         */
        eProsima_user_DllExport void status(
                idl_msg::QuadStatus_msg&& _status);

        /*!
         * @brief This function returns a constant reference to member status
         * @return Constant reference to member status
         */
        eProsima_user_DllExport const idl_msg::QuadStatus_msg& status() const;

        /*!
         * @brief This function returns a reference to member status
         * @return Reference to member status
         */
        eProsima_user_DllExport idl_msg::QuadStatus_msg& status();
        /*!
         * @brief This function sets a value in member result
         * @param _result New value for member result
         */
        eProsima_user_DllExport void result(
                idl_msg::ResultType _result);

        /*!
         * @brief This function returns the value of member result
         * @return Value of member result
         */
        eProsima_user_DllExport idl_msg::ResultType result() const;

        /*!
         * @brief This function returns a reference to member result
         * @return Reference to member result
         */
        eProsima_user_DllExport idl_msg::ResultType& result();


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
                const idl_msg::QuadFeedback_msg& data,
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

        idl_msg::FeedbackType m_feedback;
        idl_msg::QuadStatus_msg m_status;
        idl_msg::ResultType m_result;
    };
} // namespace idl_msg

#endif // _IDL_MSG_QUADFEEDBACK_MSG_H_