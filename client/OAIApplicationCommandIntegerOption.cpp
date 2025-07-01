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

#include "OAIApplicationCommandIntegerOption.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIApplicationCommandIntegerOption::OAIApplicationCommandIntegerOption(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApplicationCommandIntegerOption::OAIApplicationCommandIntegerOption() {
    this->initializeModel();
}

OAIApplicationCommandIntegerOption::~OAIApplicationCommandIntegerOption() {}

void OAIApplicationCommandIntegerOption::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_name_localizations_isSet = false;
    m_name_localizations_isValid = false;

    m_description_localizations_isSet = false;
    m_description_localizations_isValid = false;

    m_required_isSet = false;
    m_required_isValid = false;

    m_autocomplete_isSet = false;
    m_autocomplete_isValid = false;

    m_choices_isSet = false;
    m_choices_isValid = false;

    m_min_value_isSet = false;
    m_min_value_isValid = false;

    m_max_value_isSet = false;
    m_max_value_isValid = false;
}

void OAIApplicationCommandIntegerOption::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApplicationCommandIntegerOption::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_name_localizations_isValid = ::dc_rest::fromJsonValue(m_name_localizations, json[QString("name_localizations")]);
    m_name_localizations_isSet = !json[QString("name_localizations")].isNull() && m_name_localizations_isValid;

    m_description_localizations_isValid = ::dc_rest::fromJsonValue(m_description_localizations, json[QString("description_localizations")]);
    m_description_localizations_isSet = !json[QString("description_localizations")].isNull() && m_description_localizations_isValid;

    m_required_isValid = ::dc_rest::fromJsonValue(m_required, json[QString("required")]);
    m_required_isSet = !json[QString("required")].isNull() && m_required_isValid;

    m_autocomplete_isValid = ::dc_rest::fromJsonValue(m_autocomplete, json[QString("autocomplete")]);
    m_autocomplete_isSet = !json[QString("autocomplete")].isNull() && m_autocomplete_isValid;

    m_choices_isValid = ::dc_rest::fromJsonValue(m_choices, json[QString("choices")]);
    m_choices_isSet = !json[QString("choices")].isNull() && m_choices_isValid;

    m_min_value_isValid = ::dc_rest::fromJsonValue(m_min_value, json[QString("min_value")]);
    m_min_value_isSet = !json[QString("min_value")].isNull() && m_min_value_isValid;

    m_max_value_isValid = ::dc_rest::fromJsonValue(m_max_value, json[QString("max_value")]);
    m_max_value_isSet = !json[QString("max_value")].isNull() && m_max_value_isValid;
}

QString OAIApplicationCommandIntegerOption::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApplicationCommandIntegerOption::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_name_localizations.size() > 0) {
        obj.insert(QString("name_localizations"), ::dc_rest::toJsonValue(m_name_localizations));
    }
    if (m_description_localizations.size() > 0) {
        obj.insert(QString("description_localizations"), ::dc_rest::toJsonValue(m_description_localizations));
    }
    if (m_required_isSet) {
        obj.insert(QString("required"), ::dc_rest::toJsonValue(m_required));
    }
    if (m_autocomplete_isSet) {
        obj.insert(QString("autocomplete"), ::dc_rest::toJsonValue(m_autocomplete));
    }
    if (m_choices.size() > 0) {
        obj.insert(QString("choices"), ::dc_rest::toJsonValue(m_choices));
    }
    if (m_min_value_isSet) {
        obj.insert(QString("min_value"), ::dc_rest::toJsonValue(m_min_value));
    }
    if (m_max_value_isSet) {
        obj.insert(QString("max_value"), ::dc_rest::toJsonValue(m_max_value));
    }
    return obj;
}

qint32 OAIApplicationCommandIntegerOption::getType() const {
    return m_type;
}
void OAIApplicationCommandIntegerOption::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_type_Set() const{
    return m_type_isSet;
}

bool OAIApplicationCommandIntegerOption::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIApplicationCommandIntegerOption::getName() const {
    return m_name;
}
void OAIApplicationCommandIntegerOption::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_name_Set() const{
    return m_name_isSet;
}

bool OAIApplicationCommandIntegerOption::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIApplicationCommandIntegerOption::getDescription() const {
    return m_description;
}
void OAIApplicationCommandIntegerOption::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_description_Set() const{
    return m_description_isSet;
}

bool OAIApplicationCommandIntegerOption::is_description_Valid() const{
    return m_description_isValid;
}

QMap<QString, QString> OAIApplicationCommandIntegerOption::getNameLocalizations() const {
    return m_name_localizations;
}
void OAIApplicationCommandIntegerOption::setNameLocalizations(const QMap<QString, QString> &name_localizations) {
    m_name_localizations = name_localizations;
    m_name_localizations_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_name_localizations_Set() const{
    return m_name_localizations_isSet;
}

bool OAIApplicationCommandIntegerOption::is_name_localizations_Valid() const{
    return m_name_localizations_isValid;
}

QMap<QString, QString> OAIApplicationCommandIntegerOption::getDescriptionLocalizations() const {
    return m_description_localizations;
}
void OAIApplicationCommandIntegerOption::setDescriptionLocalizations(const QMap<QString, QString> &description_localizations) {
    m_description_localizations = description_localizations;
    m_description_localizations_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_description_localizations_Set() const{
    return m_description_localizations_isSet;
}

bool OAIApplicationCommandIntegerOption::is_description_localizations_Valid() const{
    return m_description_localizations_isValid;
}

bool OAIApplicationCommandIntegerOption::isRequired() const {
    return m_required;
}
void OAIApplicationCommandIntegerOption::setRequired(const bool &required) {
    m_required = required;
    m_required_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_required_Set() const{
    return m_required_isSet;
}

bool OAIApplicationCommandIntegerOption::is_required_Valid() const{
    return m_required_isValid;
}

bool OAIApplicationCommandIntegerOption::isAutocomplete() const {
    return m_autocomplete;
}
void OAIApplicationCommandIntegerOption::setAutocomplete(const bool &autocomplete) {
    m_autocomplete = autocomplete;
    m_autocomplete_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_autocomplete_Set() const{
    return m_autocomplete_isSet;
}

bool OAIApplicationCommandIntegerOption::is_autocomplete_Valid() const{
    return m_autocomplete_isValid;
}

QList<OAIApplicationCommandOptionIntegerChoice> OAIApplicationCommandIntegerOption::getChoices() const {
    return m_choices;
}
void OAIApplicationCommandIntegerOption::setChoices(const QList<OAIApplicationCommandOptionIntegerChoice> &choices) {
    m_choices = choices;
    m_choices_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_choices_Set() const{
    return m_choices_isSet;
}

bool OAIApplicationCommandIntegerOption::is_choices_Valid() const{
    return m_choices_isValid;
}

qint64 OAIApplicationCommandIntegerOption::getMinValue() const {
    return m_min_value;
}
void OAIApplicationCommandIntegerOption::setMinValue(const qint64 &min_value) {
    m_min_value = min_value;
    m_min_value_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_min_value_Set() const{
    return m_min_value_isSet;
}

bool OAIApplicationCommandIntegerOption::is_min_value_Valid() const{
    return m_min_value_isValid;
}

qint64 OAIApplicationCommandIntegerOption::getMaxValue() const {
    return m_max_value;
}
void OAIApplicationCommandIntegerOption::setMaxValue(const qint64 &max_value) {
    m_max_value = max_value;
    m_max_value_isSet = true;
}

bool OAIApplicationCommandIntegerOption::is_max_value_Set() const{
    return m_max_value_isSet;
}

bool OAIApplicationCommandIntegerOption::is_max_value_Valid() const{
    return m_max_value_isValid;
}

bool OAIApplicationCommandIntegerOption::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_autocomplete_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_choices.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_min_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApplicationCommandIntegerOption::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_name_isValid && m_description_isValid && true;
}

} // namespace dc_rest
