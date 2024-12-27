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
 * V0_0_39_job_submission.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_job_submission_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_job_submission_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_job_desc_msg.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_39_job_desc_msg;


/// <summary>
/// 
/// </summary>
class  V0_0_39_job_submission
    : public ModelBase
{
public:
    V0_0_39_job_submission();
    virtual ~V0_0_39_job_submission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_job_submission members

    /// <summary>
    /// Executable script (full contents) to run in batch step for all job components
    /// </summary>
    utility::string_t getScript() const;
    bool scriptIsSet() const;
    void unsetScript();

    void setScript(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_job_desc_msg> getJob() const;
    bool jobIsSet() const;
    void unsetJob();

    void setJob(const std::shared_ptr<V0_0_39_job_desc_msg>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_job_desc_msg>>& getJobs();
    bool jobsIsSet() const;
    void unsetJobs();

    void setJobs(const std::vector<std::shared_ptr<V0_0_39_job_desc_msg>>& value);


protected:
    utility::string_t m_Script;
    bool m_ScriptIsSet;
    std::shared_ptr<V0_0_39_job_desc_msg> m_Job;
    bool m_JobIsSet;
    std::vector<std::shared_ptr<V0_0_39_job_desc_msg>> m_Jobs;
    bool m_JobsIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_job_submission_H_ */
