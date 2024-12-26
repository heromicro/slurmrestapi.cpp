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
 * V0_0_41_openapi_job_post_response_results_inner.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_job_post_response_results_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_job_post_response_results_inner_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_job_post_response_results_inner
    : public ModelBase
{
public:
    V0_0_41_openapi_job_post_response_results_inner();
    virtual ~V0_0_41_openapi_job_post_response_results_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_job_post_response_results_inner members

    /// <summary>
    /// Job ID for updated job
    /// </summary>
    int32_t getJobId() const;
    bool jobIdIsSet() const;
    void unsetJob_id();

    void setJobId(int32_t value);

    /// <summary>
    /// Step ID for updated job
    /// </summary>
    utility::string_t getStepId() const;
    bool stepIdIsSet() const;
    void unsetStep_id();

    void setStepId(const utility::string_t& value);

    /// <summary>
    /// Verbose update status or error
    /// </summary>
    utility::string_t getError() const;
    bool errorIsSet() const;
    void unsetError();

    void setError(const utility::string_t& value);

    /// <summary>
    /// Verbose update status or error
    /// </summary>
    int32_t getErrorCode() const;
    bool errorCodeIsSet() const;
    void unsetError_code();

    void setErrorCode(int32_t value);

    /// <summary>
    /// Update response message
    /// </summary>
    utility::string_t getWhy() const;
    bool whyIsSet() const;
    void unsetWhy();

    void setWhy(const utility::string_t& value);


protected:
    int32_t m_Job_id;
    bool m_Job_idIsSet;
    utility::string_t m_Step_id;
    bool m_Step_idIsSet;
    utility::string_t m_Error;
    bool m_ErrorIsSet;
    int32_t m_Error_code;
    bool m_Error_codeIsSet;
    utility::string_t m_Why;
    bool m_WhyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_job_post_response_results_inner_H_ */