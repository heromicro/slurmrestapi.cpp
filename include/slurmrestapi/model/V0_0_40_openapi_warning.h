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
 * V0_0_40_openapi_warning.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_openapi_warning_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_openapi_warning_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_openapi_warning
    : public ModelBase
{
public:
    V0_0_40_openapi_warning();
    virtual ~V0_0_40_openapi_warning();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_openapi_warning members

    /// <summary>
    /// Long form warning description
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// Source of warning or where warning was first detected
    /// </summary>
    utility::string_t getSource() const;
    bool sourceIsSet() const;
    void unsetSource();

    void setSource(const utility::string_t& value);


protected:
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Source;
    bool m_SourceIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_openapi_warning_H_ */