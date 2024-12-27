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
 * V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner
    : public ModelBase
{
public:
    V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner();
    virtual ~V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner members

    /// <summary>
    /// Core index
    /// </summary>
    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetIndex();

    void setIndex(int32_t value);

    /// <summary>
    /// Core status
    /// </summary>
    std::vector<utility::string_t>& getStatus();
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::vector<utility::string_t>& value);


protected:
    int32_t m_Index;
    bool m_IndexIsSet;
    std::vector<utility::string_t> m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner_cores_inner_H_ */
