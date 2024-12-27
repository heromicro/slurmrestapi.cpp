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
 * V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner.h"
#include <vector>
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres();
    virtual ~V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested> getRequested() const;
    bool requestedIsSet() const;
    void unsetRequested();

    void setRequested(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed> getConsumed() const;
    bool consumedIsSet() const;
    void unsetConsumed();

    void setConsumed(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed>& value);

    /// <summary>
    /// Trackable resources allocated to the step
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& getAllocated();
    bool allocatedIsSet() const;
    void unsetAllocated();

    void setAllocated(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value);


protected:
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested> m_Requested;
    bool m_RequestedIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed> m_Consumed;
    bool m_ConsumedIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> m_Allocated;
    bool m_AllocatedIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_H_ */