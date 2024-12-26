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
 * V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner.h
 *
 * Job resources for a node
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory.h"
#include "slurmrestapi/model/V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus.h"
#include "slurmrestapi/model/V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus;
class V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory;
class V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner;


/// <summary>
/// Job resources for a node
/// </summary>
class  V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner
    : public ModelBase
{
public:
    V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner();
    virtual ~V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner members

    /// <summary>
    /// Node index
    /// </summary>
    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetIndex();

    void setIndex(int32_t value);

    /// <summary>
    /// Node name
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus> getCpus() const;
    bool cpusIsSet() const;
    void unsetCpus();

    void setCpus(const std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory> getMemory() const;
    bool memoryIsSet() const;
    void unsetMemory();

    void setMemory(const std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory>& value);

    /// <summary>
    /// Socket allocations in node
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner>>& getSockets();
    bool socketsIsSet() const;
    void unsetSockets();

    void setSockets(const std::vector<std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner>>& value);


protected:
    int32_t m_Index;
    bool m_IndexIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus> m_Cpus;
    bool m_CpusIsSet;
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory> m_Memory;
    bool m_MemoryIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner>> m_Sockets;
    bool m_SocketsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_H_ */