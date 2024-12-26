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
 * V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account();
    virtual ~V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos> getWallClock() const;
    bool wallClockIsSet() const;
    void unsetWall_clock();

    void setWallClock(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos>& value);


protected:
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos> m_Wall_clock;
    bool m_Wall_clockIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account_H_ */
