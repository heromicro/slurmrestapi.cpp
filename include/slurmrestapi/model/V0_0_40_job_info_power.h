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
 * V0_0_40_job_info_power.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_job_info_power_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_job_info_power_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/AnyType.h"
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_job_info_power
    : public ModelBase
{
public:
    V0_0_40_job_info_power();
    virtual ~V0_0_40_job_info_power();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_job_info_power members

    /// <summary>
    /// removed field
    /// </summary>
    std::vector<std::shared_ptr<AnyType>>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<std::shared_ptr<AnyType>>& value);


protected:
    std::vector<std::shared_ptr<AnyType>> m_Flags;
    bool m_FlagsIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_job_info_power_H_ */
