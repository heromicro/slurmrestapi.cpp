/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_38_qos_limits_min_tres.h
 *
 * Min tres settings
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_qos_limits_min_tres_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_qos_limits_min_tres_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_38_qos_limits_min_tres_per.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_38_qos_limits_min_tres_per;

/// <summary>
/// Min tres settings
/// </summary>
class  Dbv0_0_38_qos_limits_min_tres
    : public ModelBase
{
public:
    Dbv0_0_38_qos_limits_min_tres();
    virtual ~Dbv0_0_38_qos_limits_min_tres();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_qos_limits_min_tres members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_qos_limits_min_tres_per> getPer() const;
    bool perIsSet() const;
    void unsetPer();

    void setPer(const std::shared_ptr<Dbv0_0_38_qos_limits_min_tres_per>& value);


protected:
    std::shared_ptr<Dbv0_0_38_qos_limits_min_tres_per> m_Per;
    bool m_PerIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_qos_limits_min_tres_H_ */
