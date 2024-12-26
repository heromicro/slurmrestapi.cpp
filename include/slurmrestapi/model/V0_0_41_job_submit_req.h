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
 * V0_0_41_job_submit_req.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_job_submit_req_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_job_submit_req_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_job_desc_msg.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_job_desc_msg;


/// <summary>
/// 
/// </summary>
class  V0_0_41_job_submit_req
    : public ModelBase
{
public:
    V0_0_41_job_submit_req();
    virtual ~V0_0_41_job_submit_req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_job_submit_req members

    /// <summary>
    /// Deprecated; Populate script field in jobs[0] or job
    /// </summary>
    utility::string_t getScript() const;
    bool scriptIsSet() const;
    void unsetScript();

    void setScript(const utility::string_t& value);

    /// <summary>
    /// HetJob description
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_job_desc_msg>>& getJobs();
    bool jobsIsSet() const;
    void unsetJobs();

    void setJobs(const std::vector<std::shared_ptr<V0_0_41_job_desc_msg>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_job_desc_msg> getJob() const;
    bool jobIsSet() const;
    void unsetJob();

    void setJob(const std::shared_ptr<V0_0_41_job_desc_msg>& value);


protected:
    utility::string_t m_Script;
    bool m_ScriptIsSet;
    std::vector<std::shared_ptr<V0_0_41_job_desc_msg>> m_Jobs;
    bool m_JobsIsSet;
    std::shared_ptr<V0_0_41_job_desc_msg> m_Job;
    bool m_JobIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_job_submit_req_H_ */
