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
 * V0_0_40_kill_jobs_resp_job_federation.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_kill_jobs_resp_job_federation_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_kill_jobs_resp_job_federation_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_kill_jobs_resp_job_federation
    : public ModelBase
{
public:
    V0_0_40_kill_jobs_resp_job_federation();
    virtual ~V0_0_40_kill_jobs_resp_job_federation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_kill_jobs_resp_job_federation members

    /// <summary>
    /// Name of federation sibling (may be empty for non-federation)
    /// </summary>
    utility::string_t getSibling() const;
    bool siblingIsSet() const;
    void unsetSibling();

    void setSibling(const utility::string_t& value);


protected:
    utility::string_t m_Sibling;
    bool m_SiblingIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_kill_jobs_resp_job_federation_H_ */
