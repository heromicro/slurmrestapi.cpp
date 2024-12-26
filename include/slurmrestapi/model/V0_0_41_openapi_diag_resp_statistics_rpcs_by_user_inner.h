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
 * V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner.h
 *
 * RPCs by user
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner_average_time.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner_average_time;


/// <summary>
/// RPCs by user
/// </summary>
class  V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner
    : public ModelBase
{
public:
    V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner();
    virtual ~V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner members

    /// <summary>
    /// User ID (numeric)
    /// </summary>
    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();

    void setUserId(int32_t value);

    /// <summary>
    /// User name
    /// </summary>
    utility::string_t getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const utility::string_t& value);

    /// <summary>
    /// Number of RPCs received
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// Total time spent processing RPC in seconds
    /// </summary>
    int64_t getTotalTime() const;
    bool totalTimeIsSet() const;
    void unsetTotal_time();

    void setTotalTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner_average_time> getAverageTime() const;
    bool averageTimeIsSet() const;
    void unsetAverage_time();

    void setAverageTime(const std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner_average_time>& value);


protected:
    int32_t m_User_id;
    bool m_User_idIsSet;
    utility::string_t m_User;
    bool m_UserIsSet;
    int32_t m_Count;
    bool m_CountIsSet;
    int64_t m_Total_time;
    bool m_Total_timeIsSet;
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner_average_time> m_Average_time;
    bool m_Average_timeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner_H_ */
