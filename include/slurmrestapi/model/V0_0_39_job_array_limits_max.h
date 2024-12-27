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
 * V0_0_39_job_array_limits_max.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_job_array_limits_max_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_job_array_limits_max_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_job_array_limits_max_running.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_39_job_array_limits_max_running;


/// <summary>
/// 
/// </summary>
class  V0_0_39_job_array_limits_max
    : public ModelBase
{
public:
    V0_0_39_job_array_limits_max();
    virtual ~V0_0_39_job_array_limits_max();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_job_array_limits_max members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_job_array_limits_max_running> getRunning() const;
    bool runningIsSet() const;
    void unsetRunning();

    void setRunning(const std::shared_ptr<V0_0_39_job_array_limits_max_running>& value);


protected:
    std::shared_ptr<V0_0_39_job_array_limits_max_running> m_Running;
    bool m_RunningIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_job_array_limits_max_H_ */
