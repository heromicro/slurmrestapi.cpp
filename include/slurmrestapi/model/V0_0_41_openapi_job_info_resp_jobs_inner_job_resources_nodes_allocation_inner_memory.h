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
 * V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory_H_


#include "slurmrestapi/ModelBase.h"


namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory
    : public ModelBase
{
public:
    V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory();
    virtual ~V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory members

    /// <summary>
    /// Total memory (MiB) used by job
    /// </summary>
    int64_t getUsed() const;
    bool usedIsSet() const;
    void unsetUsed();

    void setUsed(int64_t value);

    /// <summary>
    /// Total memory (MiB) allocated to job
    /// </summary>
    int64_t getAllocated() const;
    bool allocatedIsSet() const;
    void unsetAllocated();

    void setAllocated(int64_t value);


protected:
    int64_t m_Used;
    bool m_UsedIsSet;
    int64_t m_Allocated;
    bool m_AllocatedIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory_H_ */
