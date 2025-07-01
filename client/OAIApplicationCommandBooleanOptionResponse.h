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
 * OAIApplicationCommandBooleanOptionResponse.h
 *
 * 
 */

#ifndef OAIApplicationCommandBooleanOptionResponse_H
#define OAIApplicationCommandBooleanOptionResponse_H

#include <QJsonObject>

#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIApplicationCommandBooleanOptionResponse : public OAIObject {
public:
    OAIApplicationCommandBooleanOptionResponse();
    OAIApplicationCommandBooleanOptionResponse(QString json);
    ~OAIApplicationCommandBooleanOptionResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getNameLocalized() const;
    void setNameLocalized(const QString &name_localized);
    bool is_name_localized_Set() const;
    bool is_name_localized_Valid() const;

    QMap<QString, QString> getNameLocalizations() const;
    void setNameLocalizations(const QMap<QString, QString> &name_localizations);
    bool is_name_localizations_Set() const;
    bool is_name_localizations_Valid() const;

    QString getDescriptionLocalized() const;
    void setDescriptionLocalized(const QString &description_localized);
    bool is_description_localized_Set() const;
    bool is_description_localized_Valid() const;

    QMap<QString, QString> getDescriptionLocalizations() const;
    void setDescriptionLocalizations(const QMap<QString, QString> &description_localizations);
    bool is_description_localizations_Set() const;
    bool is_description_localizations_Valid() const;

    bool isRequired() const;
    void setRequired(const bool &required);
    bool is_required_Set() const;
    bool is_required_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_name_localized;
    bool m_name_localized_isSet;
    bool m_name_localized_isValid;

    QMap<QString, QString> m_name_localizations;
    bool m_name_localizations_isSet;
    bool m_name_localizations_isValid;

    QString m_description_localized;
    bool m_description_localized_isSet;
    bool m_description_localized_isValid;

    QMap<QString, QString> m_description_localizations;
    bool m_description_localizations_isSet;
    bool m_description_localizations_isValid;

    bool m_required;
    bool m_required_isSet;
    bool m_required_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIApplicationCommandBooleanOptionResponse)

#endif // OAIApplicationCommandBooleanOptionResponse_H
