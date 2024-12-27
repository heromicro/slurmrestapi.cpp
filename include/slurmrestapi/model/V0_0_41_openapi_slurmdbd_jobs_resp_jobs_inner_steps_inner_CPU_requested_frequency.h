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
 * V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency();
    virtual ~V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min> getMin() const;
    bool minIsSet() const;
    void unsetMin();

    void setMin(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max> getMax() const;
    bool maxIsSet() const;
    void unsetMax();

    void setMax(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max>& value);


protected:
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min> m_Min;
    bool m_MinIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max> m_Max;
    bool m_MaxIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_H_ */
