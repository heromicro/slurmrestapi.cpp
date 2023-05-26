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
 * Dbv0_0_38_job_reservation.h
 *
 * Reservation usage details
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_reservation_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_reservation_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Reservation usage details
/// </summary>
class  Dbv0_0_38_job_reservation
    : public ModelBase
{
public:
    Dbv0_0_38_job_reservation();
    virtual ~Dbv0_0_38_job_reservation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_job_reservation members

    /// <summary>
    /// Database id of reservation
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int32_t value);

    /// <summary>
    /// Name of reservation
    /// </summary>
    int32_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(int32_t value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_reservation_H_ */