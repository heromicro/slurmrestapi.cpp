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
 * V0_0_39_job_info_power.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_job_info_power_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_job_info_power_H_


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
class  V0_0_39_job_info_power
    : public ModelBase
{
public:
    V0_0_39_job_info_power();
    virtual ~V0_0_39_job_info_power();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_job_info_power members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_job_info_power_H_ */
