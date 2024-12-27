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
 * V0_0_40_openapi_meta_slurm_version.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_openapi_meta_slurm_version_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_openapi_meta_slurm_version_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_openapi_meta_slurm_version
    : public ModelBase
{
public:
    V0_0_40_openapi_meta_slurm_version();
    virtual ~V0_0_40_openapi_meta_slurm_version();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_openapi_meta_slurm_version members

    /// <summary>
    /// Slurm release major version
    /// </summary>
    utility::string_t getMajor() const;
    bool majorIsSet() const;
    void unsetMajor();

    void setMajor(const utility::string_t& value);

    /// <summary>
    /// Slurm release micro version
    /// </summary>
    utility::string_t getMicro() const;
    bool microIsSet() const;
    void unsetMicro();

    void setMicro(const utility::string_t& value);

    /// <summary>
    /// Slurm release minor version
    /// </summary>
    utility::string_t getMinor() const;
    bool minorIsSet() const;
    void unsetMinor();

    void setMinor(const utility::string_t& value);


protected:
    utility::string_t m_Major;
    bool m_MajorIsSet;
    utility::string_t m_Micro;
    bool m_MicroIsSet;
    utility::string_t m_Minor;
    bool m_MinorIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_openapi_meta_slurm_version_H_ */