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
 * V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_priority_threshold.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_priority_threshold;
class V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min();
    virtual ~V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_priority_threshold> getPriorityThreshold() const;
    bool priorityThresholdIsSet() const;
    void unsetPriority_threshold();

    void setPriorityThreshold(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_priority_threshold>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres> getTres() const;
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres>& value);


protected:
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_priority_threshold> m_Priority_threshold;
    bool m_Priority_thresholdIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres> m_Tres;
    bool m_TresIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_H_ */
