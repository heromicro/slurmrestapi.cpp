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
 * V0_0_40_qos_limits_max_tres_minutes.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_qos_limits_max_tres_minutes_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_qos_limits_max_tres_minutes_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_qos_limits_max_tres_minutes_per.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_qos_limits_max_tres_minutes_per;


/// <summary>
/// 
/// </summary>
class  V0_0_40_qos_limits_max_tres_minutes
    : public ModelBase
{
public:
    V0_0_40_qos_limits_max_tres_minutes();
    virtual ~V0_0_40_qos_limits_max_tres_minutes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_qos_limits_max_tres_minutes members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_qos_limits_max_tres_minutes_per> getPer() const;
    bool perIsSet() const;
    void unsetPer();

    void setPer(const std::shared_ptr<V0_0_40_qos_limits_max_tres_minutes_per>& value);


protected:
    std::shared_ptr<V0_0_40_qos_limits_max_tres_minutes_per> m_Per;
    bool m_PerIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_qos_limits_max_tres_minutes_H_ */
