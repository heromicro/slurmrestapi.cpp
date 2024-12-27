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
 * Dbv0_0_39_meta_Slurm.h
 *
 * Slurm information
 */

#ifndef HM_SLURM_CLIENT_MODEL_Dbv0_0_39_meta_Slurm_H_
#define HM_SLURM_CLIENT_MODEL_Dbv0_0_39_meta_Slurm_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/Dbv0_0_39_meta_Slurm_version.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class Dbv0_0_39_meta_Slurm_version;


/// <summary>
/// Slurm information
/// </summary>
class  Dbv0_0_39_meta_Slurm
    : public ModelBase
{
public:
    Dbv0_0_39_meta_Slurm();
    virtual ~Dbv0_0_39_meta_Slurm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_39_meta_Slurm members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_39_meta_Slurm_version> getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(const std::shared_ptr<Dbv0_0_39_meta_Slurm_version>& value);

    /// <summary>
    /// version specifier
    /// </summary>
    utility::string_t getRelease() const;
    bool releaseIsSet() const;
    void unsetRelease();

    void setRelease(const utility::string_t& value);


protected:
    std::shared_ptr<Dbv0_0_39_meta_Slurm_version> m_Version;
    bool m_VersionIsSet;
    utility::string_t m_Release;
    bool m_ReleaseIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_Dbv0_0_39_meta_Slurm_H_ */