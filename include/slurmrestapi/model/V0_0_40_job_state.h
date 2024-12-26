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
 * V0_0_40_job_state.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_job_state_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_job_state_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_job_state
    : public ModelBase
{
public:
    V0_0_40_job_state();
    virtual ~V0_0_40_job_state();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_job_state members

    /// <summary>
    /// Current state
    /// </summary>
    std::vector<utility::string_t>& getCurrent();
    bool currentIsSet() const;
    void unsetCurrent();

    void setCurrent(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Reason for previous Pending or Failed state
    /// </summary>
    utility::string_t getReason() const;
    bool reasonIsSet() const;
    void unsetReason();

    void setReason(const utility::string_t& value);


protected:
    std::vector<utility::string_t> m_Current;
    bool m_CurrentIsSet;
    utility::string_t m_Reason;
    bool m_ReasonIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_job_state_H_ */
