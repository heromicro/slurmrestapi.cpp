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
 * V0_0_39_step_CPU.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_CPU_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_CPU_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_step_CPU_requested_frequency.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_step_CPU_requested_frequency;


/// <summary>
/// 
/// </summary>
class  V0_0_39_step_CPU
    : public ModelBase
{
public:
    V0_0_39_step_CPU();
    virtual ~V0_0_39_step_CPU();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_step_CPU members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_CPU_requested_frequency> getRequestedFrequency() const;
    bool requestedFrequencyIsSet() const;
    void unsetRequested_frequency();

    void setRequestedFrequency(const std::shared_ptr<V0_0_39_step_CPU_requested_frequency>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGovernor() const;
    bool governorIsSet() const;
    void unsetGovernor();

    void setGovernor(const utility::string_t& value);


protected:
    std::shared_ptr<V0_0_39_step_CPU_requested_frequency> m_Requested_frequency;
    bool m_Requested_frequencyIsSet;
    utility::string_t m_Governor;
    bool m_GovernorIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_CPU_H_ */
