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
 * V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner.h"
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per();
    virtual ~V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per members

    /// <summary>
    /// MaxTRESMinsPerJob
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& getJob();
    bool jobIsSet() const;
    void unsetJob();

    void setJob(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value);


protected:
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> m_Job;
    bool m_JobIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per_H_ */
