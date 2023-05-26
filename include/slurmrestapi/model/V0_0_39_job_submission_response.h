/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_39_job_submission_response.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_job_submission_response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_job_submission_response_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_meta.h"
#include "slurmrestapi/model/V0_0_39_warning.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "slurmrestapi/model/V0_0_39_error.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_meta;
class V0_0_39_error;
class V0_0_39_warning;

/// <summary>
/// 
/// </summary>
class  V0_0_39_job_submission_response
    : public ModelBase
{
public:
    V0_0_39_job_submission_response();
    virtual ~V0_0_39_job_submission_response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_job_submission_response members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_meta> getMeta() const;
    bool metaIsSet() const;
    void unsetMeta();

    void setMeta(const std::shared_ptr<V0_0_39_meta>& value);

    /// <summary>
    /// Slurm errors
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_error>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<V0_0_39_error>>& value);

    /// <summary>
    /// Slurm warnings
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_warning>>& getWarnings();
    bool warningsIsSet() const;
    void unsetWarnings();

    void setWarnings(const std::vector<std::shared_ptr<V0_0_39_warning>>& value);

    /// <summary>
    /// new job ID
    /// </summary>
    int32_t getJobId() const;
    bool jobIdIsSet() const;
    void unsetJob_id();

    void setJobId(int32_t value);

    /// <summary>
    /// new job step ID
    /// </summary>
    utility::string_t getStepId() const;
    bool stepIdIsSet() const;
    void unsetStep_id();

    void setStepId(const utility::string_t& value);

    /// <summary>
    /// Message to user from job_submit plugin
    /// </summary>
    utility::string_t getJobSubmitUserMsg() const;
    bool jobSubmitUserMsgIsSet() const;
    void unsetJob_submit_user_msg();

    void setJobSubmitUserMsg(const utility::string_t& value);


protected:
    std::shared_ptr<V0_0_39_meta> m_Meta;
    bool m_MetaIsSet;
    std::vector<std::shared_ptr<V0_0_39_error>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<V0_0_39_warning>> m_Warnings;
    bool m_WarningsIsSet;
    int32_t m_Job_id;
    bool m_Job_idIsSet;
    utility::string_t m_Step_id;
    bool m_Step_idIsSet;
    utility::string_t m_Job_submit_user_msg;
    bool m_Job_submit_user_msgIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_job_submission_response_H_ */