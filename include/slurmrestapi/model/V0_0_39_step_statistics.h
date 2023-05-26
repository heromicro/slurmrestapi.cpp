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
 * V0_0_39_step_statistics.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_statistics_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_statistics_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_step_statistics_energy.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_step_statistics_energy;

/// <summary>
/// 
/// </summary>
class  V0_0_39_step_statistics
    : public ModelBase
{
public:
    V0_0_39_step_statistics();
    virtual ~V0_0_39_step_statistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_step_statistics members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_step_statistics_energy> getEnergy() const;
    bool energyIsSet() const;
    void unsetEnergy();

    void setEnergy(const std::shared_ptr<V0_0_39_step_statistics_energy>& value);


protected:
    std::shared_ptr<V0_0_39_step_statistics_energy> m_Energy;
    bool m_EnergyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_statistics_H_ */