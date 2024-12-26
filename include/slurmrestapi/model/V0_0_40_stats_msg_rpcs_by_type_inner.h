/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_40_stats_msg_rpcs_by_type_inner.h
 *
 * RPC
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_stats_msg_rpcs_by_type_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_stats_msg_rpcs_by_type_inner_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// RPC
/// </summary>
class  V0_0_40_stats_msg_rpcs_by_type_inner
    : public ModelBase
{
public:
    V0_0_40_stats_msg_rpcs_by_type_inner();
    virtual ~V0_0_40_stats_msg_rpcs_by_type_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_stats_msg_rpcs_by_type_inner members

    /// <summary>
    /// Message type as string
    /// </summary>
    utility::string_t getMessageType() const;
    bool messageTypeIsSet() const;
    void unsetMessage_type();

    void setMessageType(const utility::string_t& value);

    /// <summary>
    /// Message type as integer
    /// </summary>
    int32_t getTypeId() const;
    bool r_typeIdIsSet() const;
    void unsetType_id();

    void setTypeId(int32_t value);

    /// <summary>
    /// Number of RPCs received
    /// </summary>
    int64_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int64_t value);

    /// <summary>
    /// Average time spent processing RPC in seconds
    /// </summary>
    int64_t getAverageTime() const;
    bool averageTimeIsSet() const;
    void unsetAverage_time();

    void setAverageTime(int64_t value);

    /// <summary>
    /// Total time spent processing RPC in seconds
    /// </summary>
    int64_t getTotalTime() const;
    bool totalTimeIsSet() const;
    void unsetTotal_time();

    void setTotalTime(int64_t value);


protected:
    utility::string_t m_Message_type;
    bool m_Message_typeIsSet;
    int32_t m_Type_id;
    bool m_Type_idIsSet;
    int64_t m_Count;
    bool m_CountIsSet;
    int64_t m_Average_time;
    bool m_Average_timeIsSet;
    int64_t m_Total_time;
    bool m_Total_timeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_stats_msg_rpcs_by_type_inner_H_ */
