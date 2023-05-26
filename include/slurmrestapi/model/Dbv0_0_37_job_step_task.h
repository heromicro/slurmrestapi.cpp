/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_37_job_step_task.h
 *
 * Task properties
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_step_task_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_step_task_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Task properties
/// </summary>
class  Dbv0_0_37_job_step_task
    : public ModelBase
{
public:
    Dbv0_0_37_job_step_task();
    virtual ~Dbv0_0_37_job_step_task();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_job_step_task members

    /// <summary>
    /// Task distribution type
    /// </summary>
    utility::string_t getDistribution() const;
    bool distributionIsSet() const;
    void unsetDistribution();

    void setDistribution(const utility::string_t& value);


protected:
    utility::string_t m_Distribution;
    bool m_DistributionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_step_task_H_ */
