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
 * V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_job_info_resp_jobs_inner_het_job_offset.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_41_openapi_job_info_resp_jobs_inner_het_job_offset;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het();
    virtual ~V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het members

    /// <summary>
    /// Heterogeneous job ID, if applicable
    /// </summary>
    int32_t getJobId() const;
    bool jobIdIsSet() const;
    void unsetJob_id();

    void setJobId(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_het_job_offset> getJobOffset() const;
    bool jobOffsetIsSet() const;
    void unsetJob_offset();

    void setJobOffset(const std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_het_job_offset>& value);


protected:
    int32_t m_Job_id;
    bool m_Job_idIsSet;
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_het_job_offset> m_Job_offset;
    bool m_Job_offsetIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het_H_ */
