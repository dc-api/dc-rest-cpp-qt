/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIEntitlementResponse.h
 *
 * 
 */

#ifndef OAIEntitlementResponse_H
#define OAIEntitlementResponse_H

#include <QJsonObject>

#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIEntitlementResponse : public OAIObject {
public:
    OAIEntitlementResponse();
    OAIEntitlementResponse(QString json);
    ~OAIEntitlementResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getSkuId() const;
    void setSkuId(const QString &sku_id);
    bool is_sku_id_Set() const;
    bool is_sku_id_Valid() const;

    QString getApplicationId() const;
    void setApplicationId(const QString &application_id);
    bool is_application_id_Set() const;
    bool is_application_id_Valid() const;

    QString getUserId() const;
    void setUserId(const QString &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    bool isDeleted() const;
    void setDeleted(const bool &deleted);
    bool is_deleted_Set() const;
    bool is_deleted_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    QDateTime getStartsAt() const;
    void setStartsAt(const QDateTime &starts_at);
    bool is_starts_at_Set() const;
    bool is_starts_at_Valid() const;

    QDateTime getEndsAt() const;
    void setEndsAt(const QDateTime &ends_at);
    bool is_ends_at_Set() const;
    bool is_ends_at_Valid() const;

    QDateTime getFulfilledAt() const;
    void setFulfilledAt(const QDateTime &fulfilled_at);
    bool is_fulfilled_at_Set() const;
    bool is_fulfilled_at_Valid() const;

    qint32 getFulfillmentStatus() const;
    void setFulfillmentStatus(const qint32 &fulfillment_status);
    bool is_fulfillment_status_Set() const;
    bool is_fulfillment_status_Valid() const;

    bool isConsumed() const;
    void setConsumed(const bool &consumed);
    bool is_consumed_Set() const;
    bool is_consumed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_sku_id;
    bool m_sku_id_isSet;
    bool m_sku_id_isValid;

    QString m_application_id;
    bool m_application_id_isSet;
    bool m_application_id_isValid;

    QString m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    bool m_deleted;
    bool m_deleted_isSet;
    bool m_deleted_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    QDateTime m_starts_at;
    bool m_starts_at_isSet;
    bool m_starts_at_isValid;

    QDateTime m_ends_at;
    bool m_ends_at_isSet;
    bool m_ends_at_isValid;

    QDateTime m_fulfilled_at;
    bool m_fulfilled_at_isSet;
    bool m_fulfilled_at_isValid;

    qint32 m_fulfillment_status;
    bool m_fulfillment_status_isSet;
    bool m_fulfillment_status_isValid;

    bool m_consumed;
    bool m_consumed_isSet;
    bool m_consumed_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIEntitlementResponse)

#endif // OAIEntitlementResponse_H
